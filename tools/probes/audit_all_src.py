"""Full audit: re-run the standard pipeline on EVERY promoted file in
src/arm9/ (plus src/arm9/stale/ and src/ov*/), using the file's own // flags:
and // version: markers when present.
"""
import pathlib
import re
import sys

HERE = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(HERE.parent))

from match import (DEFAULT_FLAGS, DEFAULT_FLAGS_ARM7, DSD_EXTRACT, MODULES,
                   apply_flags_marker, assemble_s, body_addr, compare_bytes,
                   compile_c, extract_func, symbol_marker, verify_relocs,
                   version_marker)

BASE = 0x02000000
CANONICAL = "2.0/sp2p3"
ROOT = HERE.parent.parent
SRC = ROOT / "src"

symbols = {}
for cfg_name in ("symbols.txt", "overlay_symbols.txt"):
    cfg_path = ROOT / "config" / "arm9" / cfg_name
    if not cfg_path.is_file():
        continue
    for line in cfg_path.read_text(encoding="utf-8").splitlines():
        m = re.match(r"name=(\S+) module=(\S+) addr=0x([0-9a-fA-F]+) size=0x([0-9a-fA-F]+)",
                     line.strip())
        if m:
            symbols.setdefault(m.group(1), []).append(
                (int(m.group(3), 16), int(m.group(4), 16), m.group(2)))
symbols1 = {k: v[0] for k, v in symbols.items() if len(v) == 1}
AMBIGUOUS = {k: v for k, v in symbols.items() if len(v) > 1}

files = sorted(SRC.glob("arm9/*.c")) + sorted(SRC.glob("arm9/stale/*.c")) \
    + sorted(SRC.glob("arm7/*.c")) + sorted(SRC.glob("ov*/FUN_*.c"))
print(f"auditing {len(files)} promoted C/C++ files in src/ ...")
bad = []
for f in files:
    name = f.stem
    text = f.read_text(encoding="utf-8", errors="replace")
    is_asm_file = f.suffix == ".s"
    is_arm7 = f.parent.name == "arm7"
    version = version_marker(text)
    if is_asm_file:
        is_thumb_asm = bool(re.search(r"^\s*\.thumb\b", text, re.M))
        flags = "-thumb" if is_thumb_asm else "-noThumb"
        obj = assemble_s(f, version)
    else:
        flags = DEFAULT_FLAGS_ARM7 if is_arm7 else DEFAULT_FLAGS
        flags = apply_flags_marker(flags, text)
        obj = compile_c(f, version, flags)
    if obj is None:
        bad.append((name, f"compile failed ({version})"))
        continue
    sym_name = symbol_marker(text, name)
    code, relocs, rinfo = extract_func(obj, sym_name)
    if code is None:
        bad.append((name, f"symbol {sym_name} missing in object"))
        continue
    if is_arm7:
        sym = symbols1.get(name)
        if not sym:
            bad.append((name, "not in config/arm9/symbols.txt (arm7 unhandled)"))
            continue
        continue
    is_ov = f.parent.name.startswith("ov")
    if is_ov:
        ov_id = int(f.parent.name[2:])
        rel_path, obase = MODULES[f"ov{ov_id:03d}"]
        addr = int(f.stem[-8:], 16)
        sym = symbols1.get(name)
        if sym and sym[0] != addr:
            bad.append((name, f"overlay_symbols.txt addr 0x{sym[0]:08x} != file name addr"))
        tgt = DSD_EXTRACT.joinpath(*rel_path.split("/")).read_bytes()[
            addr - obase: addr - obase + len(code)]
    else:
        if name.startswith("thunk_"):
            cands = AMBIGUOUS.get(name)
            if cands is None:
                sym = symbols1.get(name)
                cands = [sym] if sym else []
            if not cands:
                bad.append((name, "thunk not in config/arm9/symbols.txt"))
                continue
            results = []
            for (a, _sz, _mod) in cands:
                t_bytes = DSD_EXTRACT.joinpath("arm9", "arm9.bin").read_bytes()[
                    a - BASE: a - BASE + len(code)]
                ok_c, nd_c = compare_bytes(t_bytes, code, rinfo)
                thumb_c = "-thumb" in flags
                br_c = [x for x in verify_relocs(a, t_bytes, rinfo, thumb_c) if x[4] is False]
                results.append((ok_c and not br_c, nd_c, len(br_c), a))
            if not any(r[0] for r in results):
                addr, nd, nbr = results[0][3], results[0][1], results[0][2]
                bad.append((name, f"{nd} bytes differ, {nbr} bad relocs "
                                 f"(tried {len(cands)} addresses)"))
            else:
                thumb = "-thumb" in flags
                mode = "thumb" if thumb else "arm"
                print(f"  OK   {name} @ 0x{results[0][3]:08x} (0x{len(code):x}, {mode})")
            continue
        else:
            addr = int(name.replace("FUN_", ""), 16)
            sym = symbols1.get(name)
        if sym and sym[0] != addr:
            bad.append((name, f"symbols.txt addr 0x{sym[0]:08x} != file name addr"))
        addr = body_addr("arm9", addr, text)
        tgt = DSD_EXTRACT.joinpath("arm9", "arm9.bin").read_bytes()[
            addr - BASE: addr - BASE + len(code)]
    ok, ndiff = compare_bytes(tgt, code, rinfo)
    thumb = "-thumb" in flags
    badrel = [x for x in verify_relocs(addr, tgt, rinfo, thumb) if x[4] is False]
    if ok and not badrel:
        mode = "thumb" if thumb else "arm"
        print(f"  OK   {name} @ 0x{addr:08x} (0x{len(code):x}, {mode})"
              + ("  [stale evidence]" if f.parent.name == "stale" else ""))
    else:
        bad.append((name, f"{ndiff} bytes differ, {len(badrel)} bad relocs"))

print(f"\naudit: {len(files) - len(bad)}/{len(files)} PASS")
for n, why in bad:
    print(f"  FAIL {n}: {why}")
if bad:
    sys.exit(1)
