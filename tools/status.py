"""tools/status.py — banked-vs-live-set census for Phantasy Star Zero (USA, C24E).

Both numbers are computed from config/reachability/ and src/, never hand-written.
"""
import csv
import pathlib
import re

REPO = pathlib.Path(__file__).resolve().parent.parent

CENSUS = (REPO / "notes/reference/game-plumbing-census"
          / "refine" / "functions.csv")
GAME_VERDICTS = {"game", "game_leaf", "game_bridge"}


def live_set():
    names = set()
    for txt in ("call_reachable.txt", "indirect_only.txt"):
        p = REPO / "config" / "reachability" / txt
        if not p.is_file():
            continue
        for line in p.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if not line:
                continue
            m = re.match(r"(0x[0-9a-fA-F]+)\s+(\S+)", line)
            names.add(m.group(2) if m else line.split()[-1])
    return names


def overlay_live_set():
    names = set()
    for txt in ("overlay_call_reachable.txt", "overlay_indirect_only.txt"):
        p = REPO / "config" / "reachability" / txt
        if not p.is_file():
            continue
        for line in p.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if not line:
                continue
            parts = line.split()
            if len(parts) >= 2:
                names.add(parts[1])
    return names


def live_addrs():
    addrs = set()
    for txt in ("call_reachable.txt", "indirect_only.txt"):
        p = REPO / "config" / "reachability" / txt
        if not p.is_file():
            continue
        for line in p.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if not line:
                continue
            parts = line.split()
            if parts:
                addrs.add(parts[0].lower())
    return addrs


def banked():
    out = {}
    src = REPO / "src"
    for sub, tag in ((".", "arm9"), ("stale", "stale")):
        d = src / "arm9" / sub
        if d.is_dir():
            for f in d.glob("*.c"):
                out[f.stem] = tag
    for d in sorted(src.glob("ov*")):
        if d.is_dir():
            for f in d.glob("*.c"):
                out[f.stem] = d.name
    return out


def orig_asm_manifest():
    try:
        from orig_asm import HANDWRITTEN_CATEGORIES, load_orig_asm_manifest
        entries = load_orig_asm_manifest(REPO)
        hw = {e["name"]: e["module"] for e in entries if e["category"] in HANDWRITTEN_CATEGORIES}
        near = {e["name"]: e["module"] for e in entries if e["category"] not in HANDWRITTEN_CATEGORIES}
        return hw, near
    except Exception:
        return {}, {}


def census_verdicts():
    if not CENSUS.is_file():
        return {}
    with CENSUS.open(encoding="utf-8", errors="replace") as fh:
        return {r["name"]: r["verdict"] for r in csv.DictReader(fh)}


live = live_set()
ov_live = overlay_live_set()
live_addrs_set = live_addrs()
bank_c = banked()
orig_hw_raw, orig_near_raw = orig_asm_manifest()
orig_hw = {k: v for k, v in orig_hw_raw.items() if k not in bank_c}
orig_near = {k: v for k, v in orig_near_raw.items() if k not in bank_c}
bank = dict(bank_c)
stale = [n for n, t in bank_c.items() if t == "stale"]
verdict = census_verdicts()

RUNTIME_PROVEN = REPO / "config" / "reachability" / "runtime_proven.csv"


def runtime_proven():
    if not RUNTIME_PROVEN.is_file():
        return {}
    with RUNTIME_PROVEN.open(encoding="utf-8", newline="") as fh:
        return {r["name"]: r for r in csv.DictReader(fh)}


proven = runtime_proven()
static_live = set(live)
live |= set(proven)
for n, row in proven.items():
    if row["class"] == "game":
        verdict[n] = "game"
    elif n not in verdict and row["class"] == "plumb":
        verdict[n] = "plumb"

KNOWN_LIVE_EXCEPTIONS = set()

total_arm9_live = len(live)
total_ov_live = len(ov_live)
total_all_live = total_arm9_live + total_ov_live
bank_arm9 = [n for n, t in bank.items() if t == "arm9"]
bank_ov = [n for n, t in bank.items() if t.startswith("ov")]
bank_c_live = len(bank_c) - len(stale)
total_c_origin = total_all_live - len(orig_hw)

print(f"banked C/C++ files in src/: {len(bank_c)}"
      f"  (arm9: {sum(1 for t in bank_c.values() if t == 'arm9')},"
      f" overlays: {sum(1 for t in bank_c.values() if t.startswith('ov'))},"
      f" stale evidence: {len(stale)})")
if orig_hw or orig_near:
    print(f"ROM-extracted asm (config/orig_asm.txt, 0 .s files in git): {len(orig_hw) + len(orig_near)}"
          f"  (hand-written SDK/CRT/codec/DSP: {len(orig_hw)}, C near-matches in drafts/near/: {len(orig_near)})")
print(f"usable live set: {total_arm9_live} arm9 + {total_ov_live} overlay = {total_all_live} total")
if total_arm9_live:
    print(f"ARM9 C/C++ COVERAGE: {len(bank_arm9)}/{total_arm9_live}"
          f" = {100 * len(bank_arm9) / total_arm9_live:.2f}%")
if total_all_live:
    c_origin_note = (
        f"  (C-origin: {bank_c_live}/{total_c_origin} = {100 * bank_c_live / total_c_origin:.2f}%)"
        if orig_hw and total_c_origin else ""
    )
    print(f"FULL C/C++ COVERAGE: {bank_c_live}/{total_all_live}"
          f" = {100 * bank_c_live / total_all_live:.2f}%{c_origin_note}")

if verdict:
    live_game = {n for n in live if verdict.get(n) in GAME_VERDICTS}
    banked_game = live_game & set(bank)
    if live_game:
        print(f"PORT PROGRESS: {len(banked_game)}/{len(live_game)}"
              f" = {100 * len(banked_game) / len(live_game):.1f}%"
              f"   (live game logic banked / live game logic)")
else:
    print("PORT PROGRESS: unavailable (census not yet generated at "
          f"{CENSUS.relative_to(REPO)})")

not_live = [n for n in bank
            if bank[n] != "stale" and n not in live
            and n not in KNOWN_LIVE_EXCEPTIONS
            and ("0x" + n[4:].lower()) not in live_addrs_set
            and not n.startswith("FUN_overlay")]
if not_live:
    print("WARNING banked-but-not-in-live-set:", ", ".join(sorted(not_live)))
overlay_bad = [n for n in bank if n.startswith("FUN_overlay")
               and n not in ov_live]
if overlay_bad:
    print("NOTE overlay files not in static overlay live set:",
          len(overlay_bad))
