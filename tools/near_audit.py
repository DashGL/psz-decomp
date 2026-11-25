"""Rescore every parked near-miss in drafts/near/ against the ROM.

The near tier holds ONE canonical best candidate per parked live function
(admission rules: live-set only, one file per function, header carries a
`// near:` status line). This tool re-derives the truth from scratch every
run - the recorded ndiff in the header is provenance, the oracle verdict
here is current:

  python tools/near_audit.py            # table: ndiff, size, mode, verdict
  python tools/near_audit.py --rescore  # only rows whose ndiff CHANGED vs header

When a session discovers a new lever (like [VOLATILE-PAIR-ORDER] in
part-8), run this: a row that reaches mismatches=0 with clean relocs is
PROMOTABLE - promote it through the normal path (tools/match.py --all,
then the audit gate), never by hand-editing src/.

Near files NEVER enter the whole-project link (gen_dsd_project.py globs
src/ only, by construction): a near-miss's bytes are wrong by definition.
This tool is compile + compare only - no dsd, no link - which is why it
runs in seconds.
"""
import argparse
import io
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))

from match import (apply_flags_marker, compare_bytes, compile_c, extract_func,
                   symbol_marker, target_bytes, verify_relocs, version_marker,
                   DEFAULT_FLAGS, DEFAULT_FLAGS_ARM7)  # noqa: E402
import funcs as F  # noqa: E402

NEAR = REPO / "drafts" / "near"

# module name aliases for overlay files (FUN_overlay_N__addr shape)
_OVERLAY_RE = re.compile(r"FUN_overlay_(\d+)__([0-9a-fA-F]{8})$")


def module_of(name: str):
    m = _OVERLAY_RE.match(name)
    if m:
        return f"ov{int(m.group(1)):03d}"
    return "arm9"


def score(path: pathlib.Path):
    """(verdict, detail) for one near file. verdict in
    {MATCH, PROMOTABLE, SIZE, DIFF, FAIL}."""
    name = path.stem
    module = module_of(name)
    inv = F.by_name().get(name)
    text = path.read_text(encoding="utf-8", errors="replace")
    flags = DEFAULT_FLAGS_ARM7 if module == "arm7" else DEFAULT_FLAGS
    flags = apply_flags_marker(flags, text)
    version = version_marker(text)
    obj = None
    try:
        obj = _compile(path, version, flags)
    except Exception as e:  # noqa: BLE001 - report, never crash the table
        return "FAIL", f"compile error: {e}"
    if obj is None:
        return "FAIL", "compile failed"
    try:
        code, relocs, reloc_info = extract_func(obj, symbol_marker(text, name))
    except Exception:  # noqa: BLE001
        code = None
    if code is None:
        return "FAIL", "symbol missing"
    m = _OVERLAY_RE.match(name)
    addr = inv["addr"] if inv else (int(m.group(2), 16) if m else None)
    if addr is None:
        return "FAIL", "no inventory record"
    # Compare at the INVENTORY's recorded span when the candidate is smaller
    # (a short candidate hides tail pool words; a longer one pads). This
    # matches fdiff-at-recorded-size, which is what the recorded ndiff in
    # each header was measured with.
    rec_size = inv["size"] if inv else None
    tgt = target_bytes(module, addr, rec_size or len(code))
    # Relocation destinations come from the ROM, not unresolved object slots.
    bad = [r for r in verify_relocs(addr, tgt, reloc_info,
                                    is_thumb="-thumb" in flags)
           if r[4] is False]
    if len(tgt) != len(code):
        return "SIZE", (f"target 0x{len(tgt):x} vs candidate 0x{len(code):x}"
                        + (f", bad_relocs={len(bad)}" if bad else ""))
    ndiff = 0
    for i in range(0, min(len(tgt), len(code)), 4):
        a = int.from_bytes(tgt[i:i + 4], "little")
        b = int.from_bytes(code[i:i + 4], "little")
        if a != b and i not in relocs:
            ndiff += 1
    # Word-level relocation masks can hide an adjacent Thumb instruction.
    # Promotion requires every byte outside the actual relocation fields.
    exact, byte_diff = compare_bytes(tgt, code, reloc_info)
    if exact and not bad:
        return "PROMOTABLE", f"mismatches=0, exact_bytes=0, relocs clean under {version or 'canonical'}"
    return "DIFF", (f"mismatches={ndiff}/{len(tgt)//4}"
                    + f", exact_bytes={byte_diff}"
                    + (f", bad_relocs={len(bad)}" if bad else ""))


def _compile(path, version, flags):
    return compile_c(path, version, flags)


def parse_header(path: pathlib.Path):
    """(recorded_ndiff, recorded_size, version, next) from the // near: line."""
    text_head = path.read_text(encoding="utf-8", errors="replace")[:2000]
    m = re.search(r"//\s*near:\s*.*?ndiff=(\S+).*?size=(\S+).*?vers=(\S+)"
                  r"(?:.*?next=\"([^\"]*)\")?", text_head, re.IGNORECASE)
    if not m:
        return ("?", "?", None, "")
    return (m.group(1), m.group(2), m.group(3), m.group(4) or "")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rescore", action="store_true",
                    help="show only rows whose verdict differs from the header record")
    ap.add_argument("--quiet", action="store_true", help="PROMOTABLE/FAIL rows only")
    args = ap.parse_args()

    files = sorted(NEAR.glob("*/FUN_*.c"))
    files = [p for p in files if p.parent.name != "variants"]
    if not files:
        print("no near files (drafts/near/*/FUN_*.c)")
        return
    print(f"scoring {len(files)} parked near-miss candidates\n")
    rows = []
    for p in files:
        rec_ndiff, rec_size, rec_ver, nxt = parse_header(p)
        verdict, detail = score(p)
        rows.append((verdict, p, rec_ndiff, rec_size, rec_ver, nxt, detail))
    w = max(len(p.stem) for _, p, *_ in rows) + 1
    changed = 0
    for verdict, p, rec_ndiff, rec_size, rec_ver, nxt, detail in rows:
        if args.quiet and verdict not in ("PROMOTABLE", "FAIL"):
            continue
        cur = re.search(r"mismatches=(\d+)/", detail)
        cur_n = cur.group(1) if cur else ("-")
        flag = ""
        if verdict != "FAIL" and rec_ndiff not in ("?",):
            try:
                if int(cur_n) != int(re.sub(r"\D", "", rec_ndiff.split("/")[0]) or -1):
                    flag = "  <<< CHANGED"
                    changed += 1
            except ValueError:
                pass
        if args.rescore and not flag:
            continue
        print(f"{verdict:<10} {p.relative_to(REPO)}")
        print(f"{'':<10} recorded: ndiff={rec_ndiff} size={rec_size} vers={rec_ver}")
        print(f"{'':<10} now:      {detail}{flag}")
        if nxt:
            print(f"{'':<10} next:     {nxt}")
        print()
    if args.rescore:
        print(f"{changed} row(s) changed" if changed else "no changes vs recorded state")
    prom = [p for v, p, *_ in rows if v == "PROMOTABLE"]
    if prom:
        print("PROMOTABLE (0 mismatches, clean relocs - promote via match.py --all + audit):")
        for p in prom:
            print(f"  {p.relative_to(REPO)}")


if __name__ == "__main__":
    main()
