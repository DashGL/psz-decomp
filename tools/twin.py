#!/usr/bin/env python3
"""Match a function by reusing the source of an already-matched TWIN.

This ROM looks full of near-duplicate functions - batch 3's four tiny-leaf
hits (FUN_02026c1c/24/2c/34), the 0x14-arm-leaf pair (FUN_0203dcc0/dd04),
the 0x1c pair (FUN_0200c3e0/c3fc) - the same shape at different addresses.
Every one of those was matched via the auto-m2c sweep one at a time. This
tool replaces the next round of that: two functions that disassemble to the
SAME SEQUENCE OF MNEMONICS differ only in their operands, so if one is
already matched, the other's C is the matched C with the constants swapped.

    python tools/twin.py                      # try every unmatched function
    python tools/twin.py --name FUN_02012345  # just this one
    python tools/twin.py --limit 40 --out scratch/twins

What is compared, and what is substituted, are deliberately different things:

  SKELETON  the mnemonic sequence alone (no registers, no immediates). Two
            functions with the same skeleton perform the same operations in
            the same order, whatever they operate on.
  CONSTS    the ordered immediates and resolved literal-pool words. These are
            what actually differ between twins, and what gets rewritten.
  CALLS     the ordered bl/blx destinations. These MUST be remapped too.
            match.py wildcards relocation slots, so a candidate that calls the
            twin's callees still compares byte-identical while linking the
            wrong functions - a wrong answer with the right bytes. Remapping
            them is not an optimisation, it is what makes the result honest.

A candidate is only emitted when the constants and the calls both line up
one-for-one, and it is only ever reported as a match if match.py agrees.

Ported from tangOS-decomps/pictochat-decomp (MIT), adapted for PSZ Mini:
the done-set is read from the committed src/ tree (this repo has no ledger
- see notes/matching-style.md), the function table is tools/funcs.py (the
Ghidra exports), mode detection is per-function from the ROM bytes, and
stale/ files are legitimate twin SEEDS (their matches are real byte-matches;
stale-ness concerns decomp progress, not source validity).
"""
import argparse
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import funcs as F   # noqa: E402
import match as M   # noqa: E402
import capstone     # noqa: E402

HEX = re.compile(r"#?(?:0x[0-9a-fA-F]+|\b\d+\b)")

COND = ("eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
        "hi", "ls", "ge", "lt", "gt", "le", "hs", "lo")


def norm(mn):
    """Mnemonic with the condition suffix and the flag-setting `s` removed.

    Two twins can differ in condition codes - `blt` here, `blo` there - purely
    because one operand is signed and the other is not, which is exactly the
    kind of difference a rewritten source fixes. Comparing normalised
    mnemonics finds those pairs; match.py still has the final say, so a wrong
    guess costs one compile and nothing else."""
    for c in COND:
        if mn.endswith(c) and len(mn) > len(c) + 1:
            mn = mn[:-len(c)]
            break
    return mn[:-1] if mn.endswith("s") and len(mn) > 2 else mn


def _md(mode):
    m = capstone.Cs(capstone.CS_ARCH_ARM,
                    capstone.CS_MODE_THUMB if mode == "thumb" else capstone.CS_MODE_ARM)
    m.detail = True
    return m


def profile(f, all_funcs):
    """(skeleton, consts, calls) for one function, or None if it cannot be read.

    `consts` keeps duplicates and order: position is what lets two twins be
    lined up without understanding either of them."""
    size = F.true_size(f, all_funcs)
    try:
        code = M.target_bytes(f["module"], f["addr"], size)
    except (Exception, SystemExit):
        # SystemExit too: match.py's target_bytes raises SystemExit on
        # out-of-range spans, and Ghidra exports a few junk tail "functions"
        # (e.g. one at 0x020d2054 with size 0x19b8c) that trip it.
        return None
    mode = F.mode_of(f, all_funcs) or "thumb"
    md = _md(mode)
    skel, consts, calls = [], [], []
    insns = list(md.disasm(code, f["addr"]))
    if not insns:
        return None
    # A trailing literal pool disassembles as garbage instructions. Everything
    # from the last flow-ending instruction onwards is pool, not code.
    end = 0
    for i, ins in enumerate(insns):
        if ins.mnemonic in ("bx", "pop", "b") or ins.mnemonic.startswith("ldm") \
                or ins.mnemonic.startswith("pop."):
            end = i + 1
    insns = insns[:end] if end else insns
    for ins in insns:
        skel.append(ins.mnemonic)
        if ins.mnemonic in ("bl", "blx") and ins.op_str.startswith("#"):
            calls.append(int(ins.op_str[1:], 0))
            continue
        if ins.mnemonic.startswith("bl"):
            # bl <label> resolved by capstone to a target without '#'
            try:
                calls.append(int(ins.op_str, 0))
                continue
            except ValueError:
                pass
        for tok in HEX.findall(ins.op_str):
            consts.append(int(tok.lstrip("#"), 0))
    # resolved pool words - the values the pc-relative loads actually read
    for ins in insns:
        if ins.mnemonic.startswith("ldr") and "pc" in ins.op_str:
            m = re.search(r"\[pc,?\s*#(-?\d+|0x[0-9a-fA-F]+)\]", ins.op_str)
            if not m:
                continue
            off = int(m.group(1), 0)
            base = (ins.address + 4) if mode == "thumb" else (ins.address + 8)
            if mode == "thumb":
                base &= ~3
            pa = base + off
            rel = pa - f["addr"]
            if 0 <= rel + 4 <= len(code):
                consts.append(int.from_bytes(code[rel:rel + 4], "little"))
    return tuple(skel), consts, calls


def name_at(addr, by_addr):
    f = by_addr.get(addr)
    return f["name"] if f else None


def rewrite(src, pairs):
    """Textually swap old->new numbers, longest first so 0x400 does not eat the
    0x40 inside it. Every literal spelling that occurs in this repo's sources is
    covered: 0x-hex of any width, and plain decimal."""
    def forms(v):
        out = {f"0x{v:x}", f"0x{v:X}", f"0x{v:08x}", str(v)}
        if v > 0x7FFFFFFF:
            out.add(str(v - (1 << 32)))          # written as a negative
        return out

    # one pass with a combined pattern, so a value substituted in does not get
    # substituted again by a later rule
    table = {}
    for old, new in pairs:
        if old == new:
            continue
        for spelling in forms(old):
            table.setdefault(spelling, new)
    if not table:
        return src
    pat = re.compile(r"\b(" + "|".join(re.escape(k) for k in
                                       sorted(table, key=len, reverse=True)) + r")\b")

    def sub(m):
        v = table[m.group(1)]
        return f"0x{v:x}" if m.group(1).startswith("0x") else str(v)
    return pat.sub(sub, src)


def source_of(name):
    """The matched source for `name`, if banked and clean. stale/ files are
    legitimate seeds: their byte-matches are real (see matching-style.md's
    file-placement section for why they live separately)."""
    for sub in ("arm9", "arm9/stale", "arm7"):
        for ext in ("c",):
            p = REPO / "src" / sub / f"{name}.{ext}"
            if p.exists():
                t = p.read_text(encoding="utf-8", errors="ignore")
                if "NONMATCHING" in t:
                    return None
                return t
    # Overlay modules bank into src/ovNNN/ (one dir per overlay), NOT src/arm9.
    # Without this branch twin.py re-finds already-banked overlay functions and
    # prints them as fresh "TWIN MATCH" claims (measured 2026-10-04: both hits of
    # a --relax sweep were src/ov001 files banked in 1225427).
    if name.startswith("FUN_overlay_"):
        for p in sorted((REPO / "src").glob("ov*/FUN_*.c")):
            if p.stem == name:
                t = p.read_text(encoding="utf-8", errors="ignore")
                if "NONMATCHING" in t:
                    return None
                return t
    return None


def strip_header(text):
    """Drop the banked file's header comments (keeping includes, pragmas and
    the code itself). The twin's own `// flags:` line must NOT carry over -
    the target's mode decides the flags; main() adds it explicitly."""
    out = []
    for line in text.splitlines():
        s = line.strip()
        if s.startswith("//"):
            continue
        out.append(line)
    return "\n".join(out).strip()


def verify(path, f, all_funcs, mode):
    """Ask match.py. It is the only thing in this tool that decides anything.
    Ghidra's size can stop short of (or pad past) the literal pool, so both
    the recorded size and the neighbor-gap true_size are tried."""
    sizes = [f["size"], F.true_size(f, all_funcs)]
    for size in sizes:
        o = subprocess_run_match(path, f, size, mode)
        if o:
            return True
    return False


def subprocess_run_match(path, f, size, mode):
    import subprocess
    flags = ["--flags", "-O4,p -enum int -lang c99 -char signed -interworking -proc arm946e -gccext,on -msgstyle gcc"] \
        if mode == "arm" else []
    o = subprocess.run([sys.executable, str(REPO / "tools" / "match.py"), "--c", str(path),
                        "--func", f["name"], "--addr", hex(f["addr"]),
                        "--size", hex(size),
                        "--module", f["module"], "--version", M.CANONICAL, "--brief"] + flags,
                       capture_output=True, text=True).stdout
    return "MATCHING VERSIONS: " + M.CANONICAL in o


def load_done():
    """Names with committed, verified sources: src/arm9/*.c (+ stale/, whose
    matches are kept as evidence). The proof-of-record is the tree itself -
    this repo deliberately has no separate ledger (notes/matching-style.md)."""
    done = set()
    for sub in ("arm9", "arm9/stale"):
        d = REPO / "src" / sub
        if d.is_dir():
            done |= {p.stem for p in d.glob("*.c")}
    return done


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--name", action="append", default=None)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--out", default="scratch/twins")
    ap.add_argument("--min-skel", type=int, default=4,
                    help="ignore skeletons shorter than this - too generic to mean anything")
    ap.add_argument("--relax", action="store_true",
                    help="compare normalised mnemonics and try EVERY twin, verifying each. "
                         "A wrong guess costs one compile, so casting wider is cheap")
    ap.add_argument("--tries", type=int, default=6,
                    help="--relax: most twins to try per target")
    ap.add_argument("--include-dead", action="store_true",
                    help="also profile the 4,323 dead-candidate functions from the "
                         "reachability triage (default: skip them - a dead twin is a "
                         "stale demo-era copy, parked evidence at best, never a "
                         "promotion target")
    ap.add_argument("--max-verifies", type=int, default=0,
                    help="cap on compile-verify rounds in --relax mode (0 = unlimited)")
    args = ap.parse_args()

    funcs = [f for f in F.load_funcs() if f.get("module")]
    by_addr = F.by_addr(funcs)
    done = load_done()
    reach = F.load_reach()
    matched = [f for f in funcs if f["name"] in done and source_of(f["name"])]
    unmatched = [f for f in funcs if f["name"] not in done]
    if not args.include_dead:
        dead = {a for a, cls in reach.items() if cls == "dead"}
        n0 = len(unmatched)
        unmatched = [f for f in unmatched if f["addr"] not in dead]
        print(f"reachability filter: {n0 - len(unmatched)} dead candidate(s) skipped "
              f"(pass --include-dead to profile them)", file=sys.stderr)
    if args.name:
        names = set(args.name)
        unmatched = [f for f in unmatched if f["name"] in names]
        # explicit --name can also ask to re-derive an already-matched fn; allow it
        # only if it has no source (otherwise it is not 'unmatched').
    if not unmatched:
        print("no unmatched functions selected", file=sys.stderr)
        return 0

    def key(skel):
        return tuple(norm(m) for m in skel) if args.relax else skel

    print(f"profiling {len(matched)} matched + {len(unmatched)} unmatched", file=sys.stderr)
    index = {}
    for f in matched:
        p = profile(f, funcs)
        if p and len(p[0]) >= args.min_skel:
            index.setdefault(key(p[0]), []).append((f, p))
    print(f"{len(index)} distinct matched skeleton(s)", file=sys.stderr)

    outdir = pathlib.Path(args.out)
    outdir.mkdir(parents=True, exist_ok=True)
    made = 0
    verifies = 0
    for u in unmatched:
        if args.limit and made >= args.limit:
            break
        if source_of(u["name"]):
            continue  # already banked; nothing to twim
        p = profile(u, funcs)
        if not p:
            continue
        u_mode = F.mode_of(u, funcs) or "thumb"
        twins = index.get(key(p[0]))
        if not twins:
            continue
        tried = 0
        for tf, tp in twins:
            if args.relax and tried >= args.tries:
                break
            if args.max_verifies and verifies >= args.max_verifies:
                break
            if len(tp[1]) != len(p[1]) or len(tp[2]) != len(p[2]):
                continue
            src = source_of(tf["name"])
            if src is None:
                continue
            body = strip_header(src)
            body = rewrite(body, list(zip(tp[1], p[1])))
            # remap callees by position, and finally the function's own name
            ok = True
            for old_a, new_a in zip(tp[2], p[2]):
                on, nn = name_at(old_a, by_addr), name_at(new_a, by_addr)
                if on is None or nn is None:
                    if old_a != new_a:
                        ok = False
                    continue
                body = re.sub(rf"\b{on}\b", nn, body)
            if not ok:
                continue
            body = re.sub(rf"\b{tf['name']}\b", u["name"], body)
            hdr = "// flags: -noThumb\n" if u_mode == "arm" else ""
            text = f"{hdr}// twin of {tf['name']}\n{body}\n"
            dest = outdir / f"{u['name']}.c"
            dest.write_text(text, encoding="utf-8")
            tried += 1
            if not args.relax:
                made += 1
                break
            # In relaxed mode the guess is speculative, so it only counts if
            # match.py agrees. Losers are deleted rather than left to mislead.
            verifies += 1
            if verify(dest, u, funcs, u_mode):
                made += 1
                print(f"  TWIN MATCH: {u['name']} <- {tf['name']}", file=sys.stderr)
                break
            dest.unlink()
    print(f"wrote {made} twin candidate(s) to {outdir}", file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())