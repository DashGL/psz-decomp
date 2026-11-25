"""Game-vs-plumbing census inside the ARM9 live set for Phantasy Star Zero (USA, C24E).

Outputs notes/reference/game-plumbing-census/classification.txt.
"""
import bisect
import struct
import sys
import pathlib

REPO = pathlib.Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools"))
import funcs as F          # noqa: E402
import reachability as R   # noqa: E402

OUTDIR = REPO / "notes" / "reference" / "game-plumbing-census"

SEEDS = {
    0x02000800: "NitroSDK CRT0 _start (entry)",
    0x0200a380: "MSL _ll_mul (64-bit multiply helper)",
    0x0200a3a0: "MSL _s32_div_f (32-bit signed divmod helper)",
    0x020c5464: "DS Protect v1.20 wrapper",
}

HW_LO, HW_HI = 0x04000000, 0x04200000
JUNK = set()
PREENTRY_LIVE = set()


def main():
    fl = [f for f in F.load_funcs() if f["module"] == "arm9"]
    byaddr = {f["addr"]: f for f in fl}
    addrs = sorted(byaddr)
    ends = {a: min(addrs[i + 1] if i + 1 < len(addrs) else R.ARM9_END,
                   R.ARM9_END)
            for i, a in enumerate(addrs)}

    def containing(x):
        if not (R.ARM9_BASE <= x < R.ARM9_END):
            return None
        i = bisect.bisect_right(addrs, x) - 1
        return addrs[i] if i >= 0 else None

    live = set()
    for cls in ("call_reachable", "indirect_only"):
        for line in (REPO / "config" / "reachability" /
                     F._REACH_FILES[cls]).read_text().splitlines():
            if line.strip():
                live.add(int(line.split()[0], 16))
    dead = set()
    for line in (REPO / "config" / "reachability" /
                 "dead_candidates.txt").read_text().splitlines():
        if line.strip():
            dead.add(int(line.split()[0], 16))

    arm9 = (R.EXTRACT / "arm9" / "arm9.bin").read_bytes()
    itcm = (R.EXTRACT / "arm9" / "itcm.bin").read_bytes()
    dtcm = (R.EXTRACT / "arm9" / "dtcm.bin").read_bytes()
    ov_images = []
    for i in range(32):
        p = R.EXTRACT / "arm9_overlays" / f"ov{i:03d}.bin"
        if p.exists():
            base = 0x0211E640 if i <= 18 else 0x02197F80
            ov_images.append((f"ov{i:03d}", p.read_bytes(), base))

    callees = {a: set() for a in addrs}
    has_external_caller = set()
    for tag, code, base in (
            ("arm9", arm9, R.ARM9_BASE),
            ("itcm", itcm, R.ITCM_BASE),
            ("dtcm", dtcm, R.DTCM_BASE),
            *ov_images):
        for src, tgt in (R.scan_calls(code, base, False)
                         + R.scan_calls(code, base, True)):
            tf = containing(tgt)
            if tf is None:
                continue
            if tag == "arm9":
                if src < R.ARM9_ENTRY:
                    continue
                sf = containing(src)
                if sf is not None and sf != tf:
                    callees[sf].add(tf)
            else:
                has_external_caller.add(tf)

    boot = {R.ARM9_ENTRY}
    entry_end = ends.get(R.ARM9_ENTRY, R.ARM9_ENTRY + 0x130)
    lo = R.ARM9_ENTRY - R.ARM9_BASE
    for _src, tgt in (R.scan_calls(arm9[lo:entry_end - R.ARM9_BASE],
                                   R.ARM9_ENTRY, False)
                      + R.scan_calls(arm9[lo:entry_end - R.ARM9_BASE],
                                     R.ARM9_ENTRY, True)):
        tf = containing(tgt)
        if tf is not None:
            boot.add(tf)

    # Also add DS Protect functions to SEEDS
    for a in addrs:
        if 0x020c5464 <= a <= 0x020c61ec:
            SEEDS[a] = "DS Protect v1.20"

    hw = set()
    for a in addrs:
        lo, hi = a - R.ARM9_BASE, ends[a] - R.ARM9_BASE
        if hi <= lo:
            continue
        span = arm9[lo:hi]
        for off in range(0, len(span) - 3, 4):
            (w,) = struct.unpack_from("<I", span, off)
            if HW_LO <= w < HW_HI:
                hw.add(a)
                break

    def closure(strict, leaf_join):
        acc = {a for a in SEEDS if a in live or a in PREENTRY_LIVE} | boot
        blocked_ext = set()
        leaves = set()
        changed = True
        while changed:
            changed = False
            for a in live | PREENTRY_LIVE:
                if a in acc:
                    continue
                cs = {c for c in callees.get(a, ()) if c != a}
                if not cs:
                    if leaf_join and a not in has_external_caller:
                        leaves.add(a)
                        acc.add(a)
                        changed = True
                    continue
                if not cs <= acc:
                    continue
                if strict:
                    callers = {c for c in addrs if a in callees.get(c, ())}
                    if callers and not callers <= acc:
                        continue
                if a in has_external_caller and a not in PREENTRY_LIVE:
                    blocked_ext.add(a)
                    continue
                acc.add(a)
                changed = True
        return acc, blocked_ext, leaves

    sdk_strict, blocked_strict, _ = closure(strict=True, leaf_join=False)
    sdk_wide, blocked_wide, leaves = closure(strict=False, leaf_join=True)
    game = ((live - JUNK) | PREENTRY_LIVE) - sdk_wide

    def bytes_of(s):
        return sum(ends[a] - a for a in s if a in ends)

    universe = len((live - JUNK) | PREENTRY_LIVE)
    lines = [
        "game/plumbing census - ARM9 main module (Phantasy Star Zero C24E)",
        f"live rows (call_reachable+indirect_only): {len(live)}; census universe {universe}",
        f"boot seeds: entry function + its direct call targets: {len(boot)}",
        "",
        f"SDK_STRICT (both-edges-pure, LOWER bound on plumbing): {len(sdk_strict)} funcs, {bytes_of(sdk_strict)} bytes ({bytes_of(sdk_strict) // 1024} KB)",
        f"SDK_WIDE (callee-pure + leaf-join, UPPER bound on plumbing): {len(sdk_wide)} funcs, {bytes_of(sdk_wide)} bytes ({bytes_of(sdk_wide) // 1024} KB) [leaf-joined: {len(leaves)}]",
        f"  blocked by external (ITCM/DTCM/overlay) callers: strict {len(blocked_strict)}, wide {len(blocked_wide)}",
        f"GAME_SIDE (universe minus SDK_WIDE; UPPER bound for game): {len(game)} funcs, {bytes_of(game)} bytes ({bytes_of(game) // 1024} KB)",
    ]
    report = "\n".join(lines)
    print(report)

    OUTDIR.mkdir(parents=True, exist_ok=True)
    with open(OUTDIR / "classification.txt", "w") as f:
        f.write(report + "\n\n")
        f.write("# SDK_STRICT (both-edges-pure closure, lower bound)\n")
        for a in sorted(sdk_strict):
            tag = SEEDS.get(a, "")
            f.write(f"0x{a:08x} {byaddr[a]['name']} size=0x{ends[a] - a:x}"
                    f"{'  # ' + tag if tag else ''}\n")
        f.write("\n# SDK_WIDE (callee-pure + leaf-join closure, upper bound on plumbing)\n")
        for a in sorted(sdk_wide):
            tag = SEEDS.get(a, "")
            extra = ("  # seed: " + tag) if tag else (
                "  # leaf-join" if a in leaves else "")
            f.write(f"0x{a:08x} {byaddr[a]['name']} size=0x{ends[a] - a:x}{extra}\n")
        f.write("\n# GAME_SIDE (universe minus SDK_WIDE; upper bound for game)\n")
        for a in sorted(game):
            f.write(f"0x{a:08x} {byaddr[a]['name']} size=0x{ends[a] - a:x}"
                    f"{'  # HW-toucher' if a in hw else ''}\n")
        f.write("\n# boot seeds (entry function + its direct call targets)\n")
        for a in sorted(boot):
            f.write(f"0x{a:08x} {byaddr[a]['name']}\n")
        f.write("\n# closure blocked by external callers (otherwise SDK-pure)\n")
        for a in sorted(blocked_wide):
            f.write(f"0x{a:08x} {byaddr[a]['name']}\n")
    print(f"\nclassification lists -> {OUTDIR / 'classification.txt'}")


if __name__ == "__main__":
    main()
