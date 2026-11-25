"""Cluster UNMATCHED functions into near-twin families (2026-08-29).

twin.py rewrites an already-MATCHED function's source to hunt mechanical
wins. This tool covers the case twin.py structurally cannot see: functions
that are twins of EACH OTHER while both still unmatched (found the hard way
2026-08-29: FUN_0201acd0 / FUN_0201ad4c are byte-identical except one pool
word - solving one banks both, but nothing in the toolchain could surface
the pair because neither has a matched seed).

Method: disassemble every function from the extracted ARM9 image in its own
mode, shape-normalize the stream (mnemonic kept; registers, immediates,
sp-offsets and branch targets abstracted; literal pool trimmed) and group
functions by the exact normalized-stream hash. Identical skeletons = twin
cluster: when one member is solved, every other member is a
rewrite-and-verify candidate - exactly the transformation tools/twin.py
performs, except with no matched seed the parking draft of one member IS
the seed for the rest.

Exits 0; the printed report is the verdict (like audit_doclinks, whose
output - not its exit code - is the verdict). Junk Ghidra tail "functions"
are tolerated and counted, not fatal (sibling-tools port checklist).

Usage:
    python tools/twin_cluster.py                      # live belt 0x20-0x400
    python tools/twin_cluster.py --min-size 0x20 --max-size 0x80
    python tools/twin_cluster.py --include-dead       # whole live inventory
    python tools/twin_cluster.py --show 6             # members per cluster
"""
import argparse
import collections
import hashlib
import pathlib
import re
import sys

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import funcs as F   # noqa: E402

ROM = REPO / "assets" / "extracted" / "arm9" / "arm9.bin"
BASE = 0x02000000
RET = ("bx", "pop", "ldm", "ldmia")

SP_OFF_S = re.compile(r"\[sp,\s*#(?:0x[0-9a-fA-F]+|\d+)\]")
IMM_S = re.compile(r"#-?(?:0x[0-9a-fA-F]+|\d+)")
REG_S = re.compile(r"\br\d+\b")

# Thumb sets flags on data ops (adds/movs/lsls/...); one skeleton should
# cover both spellings, so strip the suffix on the known data-op set only.
DATA_OPS = {"add", "sub", "and", "orr", "eor", "mov", "mul", "mvn", "bic",
            "lsl", "lsr", "asr", "ror", "tst", "cmp", "cmn"}


def norm(i):
    """Normalized instruction: mnemonic (flag suffix stripped on data ops,
    branch conditions KEPT - beq/bne twins are different control flow) with
    registers -> R, immediates -> I, [sp,#N] -> [sp,#S], branch targets -> T."""
    m = i.mnemonic
    if m.endswith("s") and m[:-1] in DATA_OPS:
        m = m[:-1]
    ops = i.op_str
    if m[0] == "b" and m not in ("bic",):
        return m + " T"
    ops = SP_OFF_S.sub("[sp,#S]", ops)
    ops = IMM_S.sub("#I", ops)
    ops = REG_S.sub("R", ops)
    return m + " " + ops


def make_stream(jt, f, size_cap):
    """(normalized stream, mode) for one function, or None on junk."""
    addr = f["addr"]
    size = min(F.true_size(f) or 0, size_cap)
    if size < 4:
        return None
    data = jt[addr - BASE: addr - BASE + size]
    if len(data) < 4:
        return None
    mode = F.mode_of(f)
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB if mode == "thumb" else CS_MODE_ARM)
    ins = list(md.disasm(data, addr))
    if len(ins) < 2:
        return None
    last = max((k for k, i in enumerate(ins)
                if i.mnemonic in RET or i.mnemonic.startswith("pop")),
               default=len(ins) - 1)
    return tuple(norm(i) for i in ins[:last + 1]), mode


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--min-size", type=lambda x: int(x, 0), default=0x20)
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x400)
    ap.add_argument("--include-dead", action="store_true",
                    help="also cluster dead/unclassified candidates")
    ap.add_argument("--show", type=int, default=3,
                    help="member addresses printed per cluster (default 3)")
    args = ap.parse_args()

    fs = F.load_funcs()
    reach = F.load_reach()
    jt = ROM.read_bytes()
    matched = set()
    for p in (REPO / "src" / "arm9").glob("*.c"):
        m = re.match(r"FUN_([0-9a-f]{8})", p.stem)
        if m:
            matched.add(int(m.group(1), 16))
    drafts = {p.stem for p in (REPO / "drafts" / "arm9").glob("FUN_*.c")}
    drafts |= {p.stem for p in (REPO / "drafts" / "near").glob("*/FUN_*.c")}

    live = ("call_reachable", "indirect_only")
    clusters = collections.defaultdict(list)
    scanned = junk = skipped = 0
    for f in fs:
        addr = f["addr"]
        ts = F.true_size(f) or 0
        if not (args.min_size <= ts <= args.max_size):
            skipped += 1
            continue
        if not args.include_dead and reach.get(addr) not in live:
            continue
        if addr in matched:
            continue
        scanned += 1
        try:
            stream = make_stream(jt, f, args.max_size)
        except SystemExit:
            stream = None
        except Exception:
            stream = None
        if not stream:
            junk += 1
            continue
        text, _mode = stream
        h = hashlib.sha1("\n".join(text).encode()).hexdigest()[:12]
        clusters[h].append((addr, ts))

    ranked = sorted(clusters.items(), key=lambda kv: -len(kv[1]))
    dupes = [(h, v) for h, v in ranked if len(v) >= 2]
    covered = sum(len(v) for _, v in dupes)
    print(f"functions scanned: {scanned} (junk skipped: {junk}, "
          f"size-filtered out: {skipped})")
    print(f"twin clusters: {len(dupes)} covering {covered} functions")
    print()
    for h, members in ranked:
        if len(members) < 2:
            continue
        sizes = sorted(ts for _, ts in members)
        classes = sorted({reach.get(addr) or "?" for addr, _ in members})
        print(f"[{h}] {len(members)} members, sizes {sizes[0]:#x}-"
              f"{sizes[-1]:#x}, classes {classes}")
        for addr, ts in members[:args.show]:
            draft = "  <- draft parked" if f"FUN_{addr:08x}" in drafts else ""
            print(f"    0x{addr:08x} (0x{ts:x}){draft}")
        if len(members) > args.show:
            print(f"    ... +{len(members) - args.show} more")
    return 0


if __name__ == "__main__":
    sys.exit(main())