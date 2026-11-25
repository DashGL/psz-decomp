"""Rank unmatched functions by how many BANKED functions call them -
the game-logic-first target list (game logic over engine functions).

Ported from scratch/shortlist_p7.py (2026-09-01, produced 12 banks in one
session off the top of the list). Two modes:

  python tools/shortlist.py --ghidra     # Ghidra decompile-text extraction
                                         # (needs GhidraMCP running; the
                                         # original shortlist_p7 method)
  python tools/shortlist.py              # static: linear BL/BLX scan over
                                         # every banked function's source
                                         # bytes in the extracted image

Both write scratch/shortlist.json (ranked) and print the top N.

Ranking is by banked-caller count: a function called from many already-
matched game-logic sites is (a) likely game logic itself and (b) cheap to
spell, because its callers' register contracts are already understood.
Callers are listed so a session can read the call sites directly.

The banked-callee extraction needs each banked function's C source: in
--ghidra mode from GhidraMCP /decompile_function; in static mode the
callees come from decoding BL/BLX pairs in the ROM bytes at each banked
function's span (superset decode, same rule tools/reachability.py uses).
"""
import argparse
import json
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import funcs as F  # noqa: E402

OUT = REPO / "scratch" / "shortlist.json"
ROM = REPO / "assets" / "extracted" / "arm9" / "arm9.bin"
ROM_BASE = 0x02000000

VENEER_RE = re.compile(r"^FUN_[0-9a-f]{8}$")


def load_state():
    banked = {}   # name -> (addr, size, module)
    for f in F.load_funcs():
        banked[f["name"]] = f
    src_names = {p.stem for p in (REPO / "src").glob("**/FUN_*.c")}
    reach = F.load_reach()
    live_unmatched = [f for n, f in banked.items()
                      if n not in src_names
                      and reach.get(f["addr"]) in ("call_reachable",
                                                   "indirect_only")
                      and not n.startswith("thunk_")]
    return banked, src_names, live_unmatched, reach


def callees_static(name, f, rom, rom_base):
    """Callees of one banked function via linear BL/BLX decode (superset).
    Arm/Thumb auto by address alignment + mode sweep like reachability.py."""
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
    rom_bytes = rom.read_bytes() if hasattr(rom, "read_bytes") else rom
    start = f["addr"] - rom_base
    size = F.true_size(f, None) or f["size"]
    data = rom_bytes[start:start + size]
    out = set()
    md_t = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    for md, base_off in ((md_t, 0), (Cs(CS_ARCH_ARM, CS_MODE_ARM), 0)):
        addr = f["addr"] + base_off
        for ins in md.disasm(data, addr):
            if ins.mnemonic in ("bl", "blx") and "#0x" in ins.op_str:
                try:
                    tgt = int(ins.op_str.rsplit("#", 1)[-1], 16)
                except ValueError:
                    continue
                out.add(tgt & ~1)
    return out


def static_mode():
    banked, src_names, live_unmatched, reach = load_state()
    rom_bytes = ROM.read_bytes()
    unmatched_by_addr = {f["addr"]: f for f in live_unmatched}
    xrefs = {}
    for name, f in banked.items():
        if name not in src_names:
            continue
        if f["module"] not in ("main", "arm9"):
            continue  # static scan covers the main module image
        try:
            for tgt in callees_static(name, f, rom_bytes, ROM_BASE):
                u = unmatched_by_addr.get(tgt)
                if u:
                    xrefs.setdefault(u["name"], set()).add(name)
        except Exception:  # noqa: BLE001 - keep scoring the rest
            continue
    rows = [(len(v), k, banked[k]["addr"], sorted(v))
            for k, v in xrefs.items()]
    return rows


def ghidra_mode():
    import ghidra_client as gh  # noqa: E402
    banked, src_names, live_unmatched, reach = load_state()
    unmatched = {f["name"]: f["addr"] for f in live_unmatched}
    xrefs = {}
    errs = 0
    for name in sorted(src_names):
        try:
            txt = gh.decompile(name)
        except Exception:  # noqa: BLE001
            errs += 1
            continue
        for m in re.findall(r"FUN_([0-9a-f]{8})", txt):
            cal = f"FUN_{m}"
            if cal in unmatched:
                xrefs.setdefault(cal, set()).add(name)
    rows = [(len(v), k, unmatched[k], sorted(v)) for k, v in xrefs.items()]
    print(f"decompiles done, errs={errs}")
    return rows


def emit(rows, top):
    rows.sort(reverse=True)
    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(
        json.dumps([{"n": c, "calls": k, "addr": a, "callers": cs}
                    for k, c, a, cs in rows], indent=1),
        encoding="utf-8")
    print(f"shortlist: {len(rows)} unmatched-with-banked-callers "
          f"-> {OUT.relative_to(REPO)}")
    print("\ntop 30 (banked-callers, callee, addr):")
    for k, c, a, cs in rows[:top]:
        print(f"  x{k:3d} {c} @{a:08x}  <- {', '.join(cs[:4])}"
              f"{'...' if len(cs) > 4 else ''}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--ghidra", action="store_true",
                    help="use GhidraMCP decompile text (original p7 method)")
    ap.add_argument("--top", type=int, default=30)
    args = ap.parse_args()
    rows = ghidra_mode() if args.ghidra else static_mode()
    if not rows:
        print("no banked-caller edges found (nothing to rank)")
        return 1
    emit(rows, args.top)
    return 0


if __name__ == "__main__":
    sys.exit(main())
