"""Build the READABLE ROM: the bootable card relinked from
src-readable/ + the carved ground truth ("ASM") - nothing else.

Usage: python tools/build_readable_rom.py    (build_readable.bat wraps it)
"""
import io
import os
import pathlib
import re
import shutil
import subprocess
import sys
import tempfile

import elftools.elf.elffile as elffile

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
sys.path.insert(0, str(REPO / "tools" / "probes"))
import match as M  # noqa: E402
import verify_c_link as VCL  # noqa: E402
import build_all as BA  # noqa: E402
from gen_dsd_project import parse_header_span  # noqa: E402

OUT = REPO / "match" / "build" / "PSZERO-readable.nds"
READ = REPO / "src-readable" / "arm9"
BASE = 0x02000000
SYM_PAT = re.compile(r"name=(\S+) module=(\S+) addr=0x([0-9a-fA-F]+) "
                     r"size=0x([0-9a-fA-F]+)")


def load_symbols_map():
    syms = {}
    for line in (REPO / "config" / "arm9" / "symbols.txt").read_text().splitlines():
        m = SYM_PAT.match(line.strip())
        if m and m.group(2) in ("main", "arm9"):
            syms[m.group(1)] = (int(m.group(3), 16), int(m.group(4), 16))
    return syms


def main() -> int:
    launch = (os.environ.get("MWLDARM_LAUNCHER", "").split() or ["wine"]) if os.name != "nt" else []
    if not READ.is_dir():
        print("no src-readable/arm9 files - nothing to swap")
        return 1
    cands = []
    for rp in sorted(READ.glob("FUN_[0-9a-f]*.c")):
        name = rp.stem
        twin = REPO / "src" / "arm9" / rp.name
        line1 = rp.read_text(encoding="utf-8").split("\n", 1)[0].rstrip()
        want = f"// {name} - readable. matched: src/arm9/{name}.c"
        if line1 != want:
            print(f"FAIL {name}: line-1 marker mismatch (got {line1!r})")
            return 1
        if not twin.is_file():
            print(f"FAIL {name}: twin missing "
                  f"({twin.relative_to(REPO)}) - flags/version source")
            return 1
        cands.append((rp, twin))
    syms = load_symbols_map()
    print(f"src-readable: {len(cands)} function(s) to swap into the carved link")

    ws = pathlib.Path(tempfile.mkdtemp(prefix="readable_rom_"))
    proj = ws / "dsdproj"
    wb = ws / "build"
    shutil.copytree(REPO / "match" / "dsdproj", proj)
    shutil.copytree(REPO / "match" / "build", wb)
    env = dict(os.environ, LM_LICENSE_FILE=str(M.LICENSE))
    rom = VCL.ARM9.read_bytes()

    swapped = problems = veneers = 0
    notes = []
    for rp, twin in cands:
        name = rp.stem
        addr = int(name[4:], 16)
        twin_text = twin.read_text(encoding="utf-8")
        flags = M.apply_flags_marker(M.DEFAULT_FLAGS, twin_text)
        version = M.version_marker(twin_text)
        obj = M.compile_c(rp, version, flags)
        if obj is None:
            problems += 1
            notes.append(f"{name}: compile failed ({version})")
            continue
        ef = elffile.ELFFile(io.BytesIO(obj))
        sec = ef.get_section_by_name(".text")
        if sec is None:
            problems += 1
            notes.append(f"{name}: no .text section")
            continue
        code = bytearray(sec.data())
        target = rom[addr - BASE: addr - BASE + len(code)]
        code2, cmp_windows, rinfo = M.extract_func(obj, name)
        if code2 is None or bytes(code2) != bytes(code):
            problems += 1
            notes.append(f"{name}: extract mismatch")
            continue
        checks = M.verify_relocs(addr, target, rinfo, "-thumb" in flags)
        if any(row[4] is False for row in checks):
            problems += 1
            notes.append(f"{name}: wrong relocation destination")
            continue
        slots = {r["offset"] for r in rinfo}
        payload = bytearray(code)
        oob = False
        for off in sorted(slots):
            if off < 0 or off + 4 > len(payload):
                problems += 1
                notes.append(f"{name}: relocation out of bounds at {off}")
                oob = True
                break
            payload[off:off + 4] = target[off:off + 4]
        if oob:
            continue
        nonwin = bytearray(payload)
        for w in cmp_windows:
            nonwin[w:w + 4] = target[w:w + 4]
        if nonwin != target:
            problems += 1
            notes.append(f"{name}: bytes differ from the ROM outside "
                         f"the audit's wildcard windows")
            continue
        want_span = parse_header_span(twin_text)
        if want_span is not None and want_span != len(payload):
            problems += 1
            notes.append(f"{name}: twin header span 0x{want_span:x} != "
                         f"0x{len(payload):x}")
            continue
        if name not in syms:
            veneers += 1
        dst = proj / "arm9" / "src" / "arm9" / twin.with_suffix(".o").name
        ok, why = VCL.set_text_and_align(dst, bytes(payload), slots)
        if ok:
            swapped += 1
            print(f"  swapped {name} ({len(payload):#x} bytes, "
                  f"{'thumb' if '-thumb' in flags else 'arm'}, {version})")
        else:
            problems += 1
            notes.append(f"{name}: {why}")

    lines = (REPO / "match" / "build" / "objects.txt").read_text(
        encoding="utf-8").splitlines()
    lines = [ln.replace(str(REPO / "match" / "dsdproj"), str(proj))
               .replace(str(REPO / "match" / "dsdproj").replace("\\", "/"),
                        str(proj))
               .replace("match/dsdproj", str(proj))
             for ln in lines]
    (wb / "objects.txt").write_text("\n".join(lines) + "\n", encoding="utf-8")

    print(f"\nswapped {swapped}/{len(cands)}; problems {problems}; "
          f"veneers {veneers}")
    for nline in notes[:12]:
        print(f"  ! {nline}")

    rc = subprocess.run(
        [*launch, str(M.MW / "dsi" / "1.1" / "mwldarm.exe"),
         "-proc", "arm946e", "-nostdlib", "-interworking",
         "-msgstyle", "gcc", "-main", "", "-o",
         str(wb / "arm9_linked.o"),
         f"@{wb / 'objects.txt'}", str(wb / "arm9.lcf")],
        capture_output=True, text=True, env=env, cwd=str(ws))
    if rc.returncode != 0:
        print("LINK FAILED:\n" + (rc.stdout + rc.stderr)[-2000:])
        print(f"(workspace kept at {ws})")
        return 1

    linked = (wb / "build" / "arm9.o").read_bytes()
    span = min(len(linked), len(rom))
    diff = [(i, linked[i], rom[i]) for i in range(span) if linked[i] != rom[i]]
    same = linked == rom
    print("\narm9 relinked from src-readable/ + carved truth: "
          + ("BYTE-IDENTICAL to the retail ROM" if same
             else f"{len(diff)} bytes differ (FAIL)"))
    if not same:
        for i, a, b in diff[:8]:
            print(f"  +{i:#x} {a:#04x} vs {b:#04x}")
        print(f"(workspace kept at {ws})")
        return 1

    BA.build_rom_from_linked_modules(OUT)
    shutil.rmtree(ws, ignore_errors=True)
    if problems != 0 or swapped != len(cands):
        return 1
    print(f"\nREADABLE ROM written: {OUT.relative_to(REPO)} "
          f"({swapped} functions linked from src-readable/ + carved truth, "
          f"image byte-identical to the retail card)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
