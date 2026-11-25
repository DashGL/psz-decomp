"""Readable-layer status: how far the human-readable mirror (src-readable/)
has grown, and what it covers. Computed, never hand-written - the
readable-layer analogue of tools/status.py.

Prints:
  READABLE PAIRS    readable files that have a byte-matched twin in src/
  UNPAIRED          readable files with no twin (should stay 0; a readable
                    file is written only after its twin is banked)
  GAME-LOGIC COVER  of the paired addresses, how many are in the live
                    game-logic set (progress/reachability + the game/plumb
                    census), the fraction of the readable layer that is
                    actual port material.
"""
import pathlib
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
READ = REPO / "src-readable"
TWIN_ROOT = REPO / "src"


def collect_readables():
    out = []
    if not READ.is_dir():
        return out
    for mod_dir in sorted(READ.iterdir()):
        if mod_dir.is_dir():
            out.extend(mod_dir.glob("FUN_*.c"))
    return out


def twin_of(rel):
    """src/arm9/FUN_x.c -> src/arm9/FUN_x.c ; ov paths map to src/ovNNN/."""
    return TWIN_ROOT / rel


def main():
    readables = collect_readables()
    if not readables:
        print("READABLE PAIRS 0 (src-readable/ empty or missing)")
        return
    paired, unpaired = [], []
    for f in readables:
        rel = f.relative_to(READ)
        twin = twin_of(rel)
        (paired if twin.is_file() else unpaired).append((f, twin))

    print(f"READABLE FILES {len(readables)}")
    print(f"  paired   {len(paired)}")
    print(f"  unpaired {len(unpaired)}")
    for f, twin in unpaired:
        print(f"    UNPAIRED {f.relative_to(REPO)} -> {twin.relative_to(REPO)} missing")

    # game-logic cross-check (best effort: reachability files + census csv)
    live_game = set()
    reach = REPO / "config" / "reachability"
    for name in ("live_arm9.txt", "live_set.txt", "reachable.txt"):
        p = reach / name
        if p.is_file():
            for line in p.read_text(errors="replace").splitlines():
                for tok in line.split():
                    if tok.upper().startswith("FUN_") or tok.upper().startswith("020"):
                        live_game.add(tok.upper().lstrip("FUN_"))
    census = (REPO / "notes" / "reference" / "game-plumbing-census-2026-09-24"
              / "refine" / "functions.csv")
    game_addrs = set()
    if census.is_file():
        import csv
        GAME_VERDICTS = {"game", "game_bridge", "game_leaf"}
        with census.open(newline="", encoding="utf-8", errors="replace") as fh:
            for row in csv.DictReader(fh):
                name = (row.get("name") or "").strip()
                if not name.upper().startswith("FUN_"):
                    continue
                addr = name[4:].upper()
                verdict = (row.get("verdict") or "").strip().lower()
                evidence = (row.get("evidence") or "").strip().lower()
                # game side refined = game/bridge/leaf + demoted members that
                # hold lit evidence (HW-only demotions stay out of game: the
                # refine summary's 1417 = 951+62+89+350-35).
                if verdict in GAME_VERDICTS or (verdict == "demoted" and "lit" in evidence):
                    game_addrs.add(addr)
    paired_addrs = [f.stem[4:].upper() for f, _ in paired]
    in_game = [a for a in paired_addrs if a in game_addrs]
    print(f"  game-logic class (census join): {len(in_game)}/{len(paired_addrs)}"
          + ("" if game_addrs else "  [census file missing - join unavailable]"))


if __name__ == "__main__":
    main()