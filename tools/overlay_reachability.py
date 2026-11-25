"""Overlay reachability: live/dead classification of the 32 ARM9 overlay modules
in Phantasy Star Zero (USA, C24E).

Load model:
- ov000..ov018 share base_address 0x0211E640 (slot 0)
- ov019..ov031 share base_address 0x02197F80 (slot 1)
Each module is closed in isolation using its own image bytes, base_address,
and symbol list.

Output: progress/reachability/overlay_{call_reachable,indirect_only,
dead_candidates}.txt + overlay_summary.txt
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
ARM9_END = 0x02101880
ITCM_BASE = 0x01FF8000
DTCM_BASE = 0x027E0000
OVERLAY_RANGE_START = 0x0211E640
OVERLAY_RANGE_END = 0x02200000

CALL_MNEMONICS = {"bl", "blx"}


def scan_calls(code, base, thumb):
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB if thumb else CS_MODE_ARM)
    out = []
    step = 2 if thumb else 4
    for off in range(0, len(code) - 3, step):
        for ins in md.disasm(code[off:off + 4], base + off):
            if ins.mnemonic in CALL_MNEMONICS and ins.op_str.startswith("#0x"):
                try:
                    out.append((base + off, int(ins.op_str[1:], 16)))
                except ValueError:
                    pass
            break
    return out


def load_overlay_symbols():
    per_ov = {i: [] for i in range(32)}
    for line in (REPO / "config" / "arm9" / "overlay_symbols.txt").read_text(encoding="utf-8").splitlines():
        if not line.strip():
            continue
        parts = dict(p.split("=", 1) for p in line.split())
        ov = int(parts["module"][2:])
        per_ov[ov].append((int(parts["addr"], 16), parts["name"]))
    for ov in per_ov:
        per_ov[ov].sort()
    return per_ov


def main():
    ovmeta = {o["id"]: o
              for o in yaml.safe_load(
                  (EXTRACT / "arm9_overlays" / "overlays.yaml").read_text(encoding="utf-8"))["overlays"]}
    per_ov = load_overlay_symbols()
    images = {i: (EXTRACT / "arm9_overlays" / f"ov{i:03d}.bin").read_bytes()
              for i in range(32)}
    arm9 = (EXTRACT / "arm9" / "arm9.bin").read_bytes()
    itcm = (EXTRACT / "arm9" / "itcm.bin").read_bytes()
    dtcm = (EXTRACT / "arm9" / "dtcm.bin").read_bytes()

    live_arm9 = set()
    for fname in ("call_reachable.txt", "indirect_only.txt"):
        p = REPO / "config" / "reachability" / fname
        if p.is_file():
            for line in p.read_text(encoding="utf-8").splitlines():
                if line.strip():
                    live_arm9.add(int(line.split()[0], 16))

    arm9_syms = []
    for line in (REPO / "config" / "arm9" / "symbols.txt").read_text(encoding="utf-8").splitlines():
        if line.strip():
            parts = dict(p.split("=", 1) for p in line.split())
            arm9_syms.append(int(parts["addr"], 16))
    arm9_syms.sort()

    def arm9_owner(addr):
        if not (ARM9_BASE <= addr < ARM9_END):
            return None
        i = bisect.bisect_right(arm9_syms, addr) - 1
        return arm9_syms[i] if i >= 0 else None

    resident_data_refs = set()
    for blob, base in ((arm9, ARM9_BASE), (itcm, ITCM_BASE), (dtcm, DTCM_BASE)):
        for off in range(0, len(blob) - 3, 4):
            (w,) = struct.unpack_from("<I", blob, off)
            cand = w & ~1
            if OVERLAY_RANGE_START <= cand < OVERLAY_RANGE_END:
                src_owner = arm9_owner(base + off) if base == ARM9_BASE else None
                if base != ARM9_BASE or (src_owner is not None and src_owner in live_arm9):
                    resident_data_refs.add(cand)

    resident_call_refs = set()
    for src, tgt in (scan_calls(arm9, ARM9_BASE, False)
                     + scan_calls(arm9, ARM9_BASE, True)):
        if ARM9_ENTRY <= src < ARM9_END and OVERLAY_RANGE_START <= tgt < OVERLAY_RANGE_END:
            if arm9_owner(src) in live_arm9:
                resident_call_refs.add(tgt)
    print(f"resident roots: data words -> overlay space: {len(resident_data_refs)}, "
          f"live-ARM9 BL/BLX into overlay space: {len(resident_call_refs)}")
    root_census = {ov: {} for ov in range(32)}

    outdir = REPO / "config" / "reachability"
    outdir.mkdir(parents=True, exist_ok=True)
    overlay_files = {name: open(outdir / f"overlay_{name}.txt", "w", encoding="utf-8")
                     for name in ("call_reachable", "indirect_only", "dead_candidates")}

    lines = ["ARM9 overlay functions (Ghidra): per-module live/dead classification",
             ""]
    tot_f = tot_live = tot_dead = tot_liv_kb = tot_cs_kb = 0
    print("=== per-module closure ===")
    for ov, syms in sorted(per_ov.items()):
        img = images[ov]
        ov_base = int(ovmeta[ov]["base_address"])
        code_end = int(ovmeta[ov]["code_size"])
        in_module = [a for a, _ in syms if 0 <= a - ov_base < code_end]
        out_of_module = [a for a, _ in syms if a - ov_base >= code_end or a < ov_base]
        names = dict(syms)
        mod_starts = set(in_module)
        ends = {}
        for i, a in enumerate(in_module):
            nxt = in_module[i + 1] if i + 1 < len(in_module) else ov_base + code_end
            ends[a] = min(nxt, ov_base + code_end)

        def owner(addr):
            off = addr - ov_base
            if off < 0 or off >= code_end:
                return None
            i = bisect.bisect_right(in_module, addr) - 1
            return in_module[i] if i >= 0 else None

        edges = {}
        for src, tgt in scan_calls(img, ov_base, False) + \
                scan_calls(img, ov_base, True):
            sf, tf = owner(src), owner(tgt)
            if sf is not None and tf is not None and sf != tf:
                edges.setdefault(sf, set()).add(tf)

        def words_of(faddr):
            lo, hi = faddr - ov_base, ends[faddr] - ov_base
            for off in range(lo, hi - 3, 4):
                (w,) = struct.unpack_from("<I", img, off)
                cand = w & ~1
                if cand in mod_starts and cand != faddr:
                    yield cand

        reach = set()
        ctor_lo = int(ovmeta[ov]["ctor_start"])
        ctor_hi = max(int(ovmeta[ov]["ctor_end"]), ctor_lo + 4)
        ctors = set()
        for off in range(ctor_lo - ov_base, min(ctor_hi - ov_base, len(img) - 3), 4):
            if off >= 0:
                (w,) = struct.unpack_from("<I", img, off)
                cand = w & ~1
                if cand in mod_starts:
                    ctors.add(cand)
        reach |= ctors
        base_root = ov_base if ov_base in mod_starts else None
        if base_root:
            reach.add(base_root)
        ext_roots = {w for w in resident_data_refs | resident_call_refs
                     if w in mod_starts}
        reach |= ext_roots
        # Also scan module data/rodata tables for exact function pointers
        for off in range(0, len(img) - 3, 4):
            (w,) = struct.unpack_from("<I", img, off)
            cand = w & ~1
            if cand in mod_starts:
                reach.add(cand)
        root_census[ov] = dict(ctors=len(ctors), base=bool(base_root),
                               ext=len(ext_roots))

        stack = list(reach)
        while stack:
            f = stack.pop()
            for t in edges.get(f, ()):
                if t not in reach:
                    reach.add(t)
                    stack.append(t)

        joiners = set()
        changed = True
        while changed:
            changed = False
            for faddr in sorted(reach | joiners):
                for w in words_of(faddr):
                    if w not in reach and w not in joiners:
                        joiners.add(w)
                        changed = True

        live_set = reach | joiners
        dead = sorted(a for a in in_module if a not in live_set)
        live_bytes = sum(ends[a] - a for a in live_set)

        parent = {a: a for a in dead}

        def find(x):
            while parent[x] != x:
                parent[x] = parent[parent[x]]
                x = parent[x]
            return x

        ncaller = dict.fromkeys(dead, 0)
        for caller, cs in edges.items():
            for c in cs:
                if c in parent:
                    ncaller[c] += 1
                    if caller in parent:
                        r1, r2 = find(caller), find(c)
                        if r1 != r2:
                            parent[r1] = r2
        islands = Counter(find(a) for a in dead)
        top = sorted(islands.values(), reverse=True)

        for a in sorted(reach - joiners):
            overlay_files["call_reachable"].write(
                f"ov{ov:03d}::0x{a:08x} {names.get(a, '')}\n")
        for a in sorted(joiners):
            overlay_files["indirect_only"].write(
                f"ov{ov:03d}::0x{a:08x} {names.get(a, '')}\n")
        for a in dead:
            overlay_files["dead_candidates"].write(
                f"ov{ov:03d}::0x{a:08x} {names.get(a, '')}\n")

        tot_f += len(in_module)
        tot_live += len(live_set)
        tot_dead += len(dead)
        tot_liv_kb += live_bytes
        tot_cs_kb += code_end
        rc = root_census[ov]
        lines.append(
            f"ov{ov:03d}: fns {len(in_module):4d} (+{len(out_of_module)} beyond code_size) | "
            f"call-reachable {len(reach):4d} | indirect {len(joiners):3d} | "
            f"dead {len(dead):4d} | live ~{live_bytes//1024:3d}KB of {code_end//1024:3d}KB | "
            f"islands {len(islands):3d} largest {top[0] if top else 0:4d} | "
            f"zero-caller {sum(1 for v in ncaller.values() if v == 0)} | "
            f"roots ctor={rc['ctors']} base={int(rc['base'])} ext={rc['ext']}")
        print(lines[-1])

    for f in overlay_files.values():
        f.close()
    lines.append("")
    lines.append(f"TOTAL: functions {tot_f} | live {tot_live} | dead {tot_dead} | "
                 f"live ~{tot_liv_kb//1024}KB of {tot_cs_kb//1024}KB code")
    (outdir / "overlay_summary.txt").write_text("\n".join(lines) + "\n", encoding="utf-8")
    print()
    print("\n".join(lines[-2:]))


if __name__ == "__main__":
    main()
