#!/usr/bin/env python3
"""Hill-climb a function's local DECLARATION ORDER against the target.

Declaration order is load-bearing twice over on this compiler: it picks which
callee-saved register each long-lived local gets (closed pictochat/sm64ds's
FUN_022d5a64 last mile - their notes/mwccarm-codegen.md 3m), and it picks
which STACK SLOT each spilled local gets (took their FUN_022d5540 from 29 to
26 aligned-diff blocks - 3p). The second matters more than it looks:
`fdiff --align` collapses register renames but NOT slot renumbering, so one
wrong slot order inflates the block count across the whole function and reads
as many independent defects.

That makes it a permutation search, not the cartesian toggle search
tools/frame_search.py does, and n! is far too large to enumerate - 19 locals
is 1.2e17 orders. This hill-climbs instead: repeatedly try relocating ONE
declaration to every other position, keep the single best improvement,
repeat until nothing improves or the compile budget runs out. Each pass costs
about n*(n-1) compiles.

PSZ Mini relevance: FUN_0203e874's ndiff=7 plateau residual is register-role
coupling (notes/mwccarm-codegen.md 5a) and FUN_02004d50 is one word over -
both are declaration-order-shaped problems. Note our title is mostly THUMB:
the levers above were derived on all-ARM titles, so treat this as hypothesis
generator per tools/levers.py --arch thumb, not as settled fact.

Ported from tangOS-decomps/pictochat-decomp (MIT): scoring now runs OUR
tools/fdiff.py (Thumb-aware; pass --arm for ARM-mode targets), --version
defaults to the pinned CANONICAL, --addr/--module added explicitly.

    python tools/declorder_search.py --c scratch/FUN_0203e874_draft.c \
        --func FUN_0203e874 --addr 0x0203e874 --size 0x118

By default it permutes the run of consecutive `    <type> <name>;` lines at
the top of the function body; use --begin/--end to bound it explicitly when
the auto-detected block is wrong. --out writes the best source found.

Score is (aligned-diff blocks, |insn delta|, |size delta|), lower better; a
shape-perfect alignment scores (0,0,0). Scoring on blocks rather than size
is deliberate - size can sit still for many rounds while the structure
converges. (A byte-exact match stops the search only when fdiff reports it;
alignment mode collapses register coloring, so always confirm a low score
with a real tools/match.py pass.)
"""
import argparse
import pathlib
import re
import subprocess
import sys
import tempfile

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))

HDR_RE = re.compile(
    r"target:\s*(\d+)\s*decoded insn\(s\)\s*\((0x[0-9a-f]+) bytes\);\s*"
    r"candidate:\s*(\d+)\s*decoded insn\(s\)\s*\((0x[0-9a-f]+) bytes")
BLOCK_RE = re.compile(r"(\d+)\s+non-equal block\(s\)")
DECL_RE = re.compile(r"^\s{4}[A-Za-z_][\w \*]*\s[\*]?\w+;\s*$")


def score(text, a, tmp):
    tmp.write_text(text, encoding="utf-8")
    cmd = [sys.executable, str(REPO / "tools" / "fdiff.py"), "--c", str(tmp),
           "--func", a.func, "--addr", a.addr, "--size", a.size,
           "--module", a.module, "--version", a.version,
           "--align", "--align-max-blocks", "0"]
    if a.arm:
        cmd.append("--arm")
    r = subprocess.run(cmd, capture_output=True, text=True, cwd=str(REPO))
    out = r.stdout + r.stderr
    if "RESULT match=True" in out:
        return (-1, 0, 0)
    m, b = HDR_RE.search(out), BLOCK_RE.search(out)
    if not m:
        return (10**6, 10**6, 10**6)
    return (int(b.group(1)) if b else 10**6,
            abs(int(m.group(3)) - int(m.group(1))),
            abs(int(m.group(4), 16) - int(a.size, 0)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--c", required=True)
    ap.add_argument("--func", required=True)
    ap.add_argument("--addr", required=True, help="target address (0x...)")
    ap.add_argument("--size", required=True, help="target size (0x...)")
    ap.add_argument("--module", default="arm9")
    ap.add_argument("--version", default=None, help="default: match.py CANONICAL")
    ap.add_argument("--arm", action="store_true", help="ARM-mode target (default: Thumb)")
    ap.add_argument("--begin", default=None, help="first declaration line (verbatim)")
    ap.add_argument("--end", default=None, help="last declaration line (verbatim)")
    ap.add_argument("--max-compiles", type=int, default=1200)
    ap.add_argument("--out", default=None)
    a = ap.parse_args()
    if a.version is None:
        import match as M
        a.version = M.CANONICAL

    src = pathlib.Path(a.c)
    lines = src.read_text(encoding="utf-8").split("\n")

    if a.begin and a.end:
        i = next(k for k, l in enumerate(lines) if l.strip() == a.begin.strip())
        j = next(k for k, l in enumerate(lines) if l.strip() == a.end.strip())
    else:  # longest run of consecutive declaration-looking lines
        best = (0, 0, 0)
        k = 0
        while k < len(lines):
            if DECL_RE.match(lines[k]):
                s = k
                while k < len(lines) and DECL_RE.match(lines[k]):
                    k += 1
                if k - s > best[0]:
                    best = (k - s, s, k - 1)
            else:
                k += 1
        _, i, j = best
    decls = lines[i:j + 1]
    if len(decls) < 2:
        sys.exit("could not find a declaration block to permute (use --begin/--end)")
    print(f"permuting {len(decls)} declaration(s), lines {i+1}-{j+1}:")
    for d in decls:
        print("   ", d.strip())

    def build(order):
        return "\n".join(lines[:i] + order + lines[j + 1:])

    tmpdir = tempfile.mkdtemp()
    tmp = pathlib.Path(tmpdir) / "cand.c"
    cur = list(decls)
    best_score = score(build(cur), a, tmp)
    print(f"\nstart: blocks={best_score[0]} insn±{best_score[1]} size±{best_score[2]}")
    compiles = 1

    improved = True
    while improved and compiles < a.max_compiles:
        improved = False
        for src_i in range(len(cur)):
            for dst in range(len(cur)):
                if src_i == dst or compiles >= a.max_compiles:
                    continue
                cand = list(cur)
                cand.insert(dst, cand.pop(src_i))
                s = score(build(cand), a, tmp)
                compiles += 1
                if s == (-1, 0, 0):
                    out = pathlib.Path(a.out or "declorder_MATCH.c")
                    out.write_text(build(cand), encoding="utf-8")
                    print(f"\n*** BYTE-EXACT MATCH *** after {compiles} compiles -> {out}")
                    return
                if s < best_score:
                    best_score, cur, improved = s, cand, True
                    print(f"  [{compiles}] blocks={s[0]} insn±{s[1]} size±{s[2]}"
                          f"  (moved {cand[dst].strip()!r})")
                    break
            if improved:
                break

    print(f"\nno further improvement after {compiles} compiles; "
          f"best blocks={best_score[0]} insn±{best_score[1]} size±{best_score[2]}")
    if a.out:
        pathlib.Path(a.out).write_text(build(cur), encoding="utf-8")
        print("best written to", a.out)
    print("\nbest order:")
    for d in cur:
        print("   ", d.strip())


if __name__ == "__main__":
    main()