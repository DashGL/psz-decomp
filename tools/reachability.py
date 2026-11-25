"""Stale-code triage: which ARM9 functions are actually reachable?

Classifies every main-module (ARM9) function in Phantasy Star Zero (USA, C24E):

  call_reachable  - reachable from the ARM9 entry point (0x02000800) via
                    BL/BLX chains, or referenced from overlay/ITCM/DTCM code
  indirect_only   - not call-reachable, but a data word in reachable code
                    (incl. trailing literal pools, .ctor, .rodata/.data) points
                    at its exact function start
  unreferenced    - neither: stale-code candidate
"""
import bisect
from collections import Counter
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
import yaml

REPO = Path(__file__).resolve().parent.parent
EXTRACT = REPO / "assets" / "extracted"

ARM9_BASE = 0x02000000
ARM9_ENTRY = 0x02000800
ARM9_END = 0x02101880      # arm9.bin size (0x101880)
ITCM_BASE = 0x01FF8000
DTCM_BASE = 0x027E0000

CALL_MNEMONICS = {"bl", "blx"}


def load_symbols():
    main = []
    for line in (REPO / "config" / "arm9" / "symbols.txt").read_text(encoding="utf-8").splitlines():
        if not line.strip():
            continue
        parts = dict(p.split("=", 1) for p in line.split())
        main.append((int(parts["addr"], 16), parts["name"]))
    main.sort()
    return main


def scan_calls(code, base, thumb):
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB if thumb else CS_MODE_ARM)
    out = []
    step = 2 if thumb else 4
    n = len(code)
    for off in range(0, n - 3, step):
        for ins in md.disasm(code[off:off + 4], base + off):
            if ins.mnemonic in CALL_MNEMONICS and ins.op_str.startswith("#0x"):
                try:
                    out.append((base + off, int(ins.op_str[1:], 16)))
                except ValueError:
                    pass
            break
    return out


def scan_words(code, base):
    for off in range(0, len(code) - 3, 4):
        (w,) = struct.unpack_from("<I", code, off)
        yield base + off, w


def main():
    main_funcs = load_symbols()
    main_addrs = [a for a, _ in main_funcs]
    names = dict(main_funcs)
    main_set = set(main_addrs)
    ends = {a: min((main_addrs[i + 1] if i + 1 < len(main_addrs) else ARM9_END),
                   ARM9_END)
            for i, a in enumerate(main_addrs)}

    def containing(addr):
        if not (ARM9_BASE <= addr < ARM9_END):
            return None
        idx = bisect.bisect_right(main_addrs, addr) - 1
        return main_addrs[idx] if idx >= 0 else None

    arm9 = (EXTRACT / "arm9" / "arm9.bin").read_bytes()
    itcm = (EXTRACT / "arm9" / "itcm.bin").read_bytes()
    dtcm = (EXTRACT / "arm9" / "dtcm.bin").read_bytes()

    ov_meta = {o["id"]: o for o in yaml.safe_load(
        (EXTRACT / "arm9_overlays" / "overlays.yaml").read_text(encoding="utf-8"))["overlays"]}
    ov_images = {}
    for i in range(32):
        p = EXTRACT / "arm9_overlays" / f"ov{i:03d}.bin"
        if p.exists():
            ov_images[i] = (p.read_bytes(), int(ov_meta[i]["base_address"]))

    call_sites = []
    for src, tgt in scan_calls(arm9, ARM9_BASE, False) + scan_calls(arm9, ARM9_BASE, True):
        if src >= ARM9_ENTRY and ARM9_BASE <= tgt < ARM9_END:
            call_sites.append((src, tgt))
    for i, (code, ov_base) in ov_images.items():
        for src, tgt in scan_calls(code, ov_base, False) + scan_calls(code, ov_base, True):
            if ARM9_BASE <= tgt < ARM9_END:
                call_sites.append((src, tgt))
    for code, base in ((itcm, ITCM_BASE), (dtcm, DTCM_BASE)):
        for src, tgt in scan_calls(code, base, False) + scan_calls(code, base, True):
            if ARM9_BASE <= tgt < ARM9_END:
                call_sites.append((src, tgt))

    edges = {}
    for src, tgt in call_sites:
        if ARM9_BASE <= src < ARM9_END:
            sf = containing(src)
            tf = containing(tgt)
            if sf is not None and tf is not None and sf != tf:
                edges.setdefault(sf, set()).add(tf)
    direct_callees = {containing(t) for _, t in call_sites} - {None}

    reach = set()
    stack = [containing(ARM9_ENTRY)]
    while stack:
        f = stack.pop()
        if f is None or f in reach:
            continue
        reach.add(f)
        stack.extend(edges.get(f, ()))

    for i, (code, ov_base) in ov_images.items():
        for src, tgt in scan_calls(code, ov_base, False) + scan_calls(code, ov_base, True):
            f = containing(tgt)
            if f is not None and f not in reach:
                reach.add(f)
                stack.append(f)
    for code, base in ((itcm, ITCM_BASE), (dtcm, DTCM_BASE)):
        for src, tgt in scan_calls(code, base, False) + scan_calls(code, base, True):
            f = containing(tgt)
            if f is not None and f not in reach:
                reach.add(f)
                stack.append(f)
    while stack:
        f = stack.pop()
        if f in reach:
            continue
        reach.add(f)
        stack.extend(edges.get(f, ()))
    changed = True
    while changed:
        changed = False
        for f in list(reach):
            for t in edges.get(f, ()):
                if t not in reach:
                    reach.add(t)
                    changed = True

    # Data references from reachable code + ARM9 .ctor/.rodata/.data section
    # (0x020F6058..0x02101880 holds static init pointers, vtables, dispatch tables)
    DATA_SECTION_START = 0x020F6058
    indirect = set()
    for off in range(DATA_SECTION_START - ARM9_BASE, len(arm9) - 3, 4):
        (w,) = struct.unpack_from("<I", arm9, off)
        cand = w & ~1
        if cand in main_set and cand not in reach:
            indirect.add(cand)

    changed = True
    while changed:
        changed = False
        for faddr in sorted(reach | indirect):
            for t in edges.get(faddr, ()):
                if t not in reach and t not in indirect:
                    indirect.add(t)
                    changed = True
            lo, hi = faddr - ARM9_BASE, ends[faddr] - ARM9_BASE
            if hi <= lo:
                continue
            for off in range(lo, hi - 3, 4):
                (w,) = struct.unpack_from("<I", arm9, off)
                cand = w & ~1
                if cand in main_set and cand != faddr and cand not in reach \
                        and cand not in indirect:
                    indirect.add(cand)
                    changed = True
        for code, base in ((itcm, ITCM_BASE), (dtcm, DTCM_BASE)):
            for _, w in scan_words(code, base):
                cand = w & ~1
                if cand in main_set and cand not in reach and cand not in indirect:
                    indirect.add(cand)
                    changed = True
        for code, ov_base in ov_images.values():
            for _, w in scan_words(code, ov_base):
                cand = w & ~1
                if cand in main_set and cand not in reach and cand not in indirect:
                    indirect.add(cand)
                    changed = True

    secure = {a for a in main_addrs if a < ARM9_ENTRY}
    dead = {a for a in main_addrs if a not in reach and a not in indirect and a not in secure}
    unclassified = {a for a in main_addrs
                    if a not in reach and a not in indirect and a in secure}

    outdir = REPO / "config" / "reachability"
    outdir.mkdir(parents=True, exist_ok=True)

    def dump(name, addrs):
        with open(outdir / name, "w", encoding="utf-8") as f:
            for a in sorted(addrs):
                f.write(f"0x{a:08x} {names.get(a, '')}\n")

    dump("call_reachable.txt", reach)
    dump("indirect_only.txt", indirect)
    dump("dead_candidates.txt", dead)
    dump("unclassified_preentry.txt", unclassified)

    lines = []
    lines.append(f"ARM9 functions (Ghidra): {len(main_addrs)}")
    live_all = reach | indirect
    dead_list = sorted(a for a in main_addrs if a not in live_all and a not in secure)
    dead_set = set(dead_list)

    parent = {a: a for a in dead_list}

    def find(x):
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x

    ncaller = dict.fromkeys(dead_list, 0)
    for caller, callees in edges.items():
        for c in callees:
            if c in dead_set:
                ncaller[c] += 1
                if caller in dead_set:
                    r1, r2 = find(caller), find(c)
                    if r1 != r2:
                        parent[r1] = r2
    islands = {}
    for a in dead_list:
        islands[find(a)] = islands.get(find(a), 0) + 1
    top = sorted(islands.values(), reverse=True)
    img_end = ARM9_END
    live_bytes = sum(min(ends[a], img_end) - a for a in live_all if a in ends)
    dead_bytes = sum(min(ends[a], img_end) - a for a in dead_list)
    tot_bytes = max(1, sum(min(ends[a], img_end) - a for a in ends))
    lines.append(f"live (call+data closed): {len(live_all)} (~{live_bytes//1024} KB)")
    lines.append(f"dead: {len(dead_list)} (~{dead_bytes//1024} KB = "
                 f"{dead_bytes/tot_bytes:.0%} of image bytes)")
    lines.append(f"dead islands (weak-connected call components): {len(islands)}; "
                 f"largest: {top[0] if top else 0}")
    lines.append(f"dead with zero callers: {sum(1 for v in ncaller.values() if v == 0)}")
    lines.append("")
    lines.append(f"  secure-area/pre-entry below entry 0x{ARM9_ENTRY:08x}: {len(secure)} "
                 f"(live: {len(secure & (reach | indirect))}, unclassified: "
                 f"{len(unclassified)} -> unclassified_preentry.txt)")
    lines.append(f"  call-reachable from ARM9 entry: {len(reach - secure)}")
    lines.append(f"  indirect-only (data-referenced from reachable code): {len(indirect)}")
    lines.append(f"  unreferenced (stale candidates): {len(dead)}")
    lines.append(f"  call sites scanned: {len(call_sites)}; distinct callees: {len(direct_callees)}")
    lines.append("")
    hist = Counter((a - ARM9_BASE) >> 16 for a in dead)
    lines.append("dead-candidate clusters (64KB blocks of arm9.bin):")
    for blk, cnt in sorted(hist.items(), key=lambda kv: -kv[1])[:12]:
        lines.append(f"  0x{ARM9_BASE + (blk << 16):08x}: {cnt}")
    (outdir / "summary.txt").write_text("\n".join(lines) + "\n", encoding="utf-8")
    print("\n".join(lines))


if __name__ == "__main__":
    main()
