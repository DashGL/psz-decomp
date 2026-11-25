"""Build the NEAR-TEST ROM with eligible parked candidates swapped in,
so the game can be play-tested in melonDS. Inclusion counts and skip
reasons identify which candidates are actually enabled.

Mechanism (verify_c_link.py's swap, redirected to a bootable output):
  1. copy match/dsdproj + match/build into a temp workspace
  2. for every drafts/near/arm9/FUN_*.c: compile (marker flags + version)
  3. write the compiled bytes INTO the dsd gap object covering the
     function's address (near targets are unmatched - they live in gaps,
     not per-file delink objects). The candidate may not exceed the
     function's true span (gap to the next delink entry, i.e.
     funcs.true_size); smaller candidates keep the ROM's original tail
     (pool words) so the layout is untouched. Candidates with displaced
     or unverifiable relocation positions are skipped. Verified slots
     restore exactly the ROM's four-byte final linked values.
  4. relink the whole arm9 with mwldarm
  5. rebuild the ROM with dsd rom build -> match/build/PSZERO-near-test.nds

The near-test ROM is EXPECTED to differ from the card (the candidates are
near-misses by definition). A crash/glitch in-game localizes the failing
candidate; a clean run is evidence the residual is benign. Near files
never enter the COMMITTED delink (gen_dsd_project.py globs src/ only) -
this all happens in the temp workspace.

Usage: python tools/build_near_rom.py    (build_near.bat wraps it)
"""
import os
import pathlib
import re
import shutil
import struct
import subprocess
import sys
import tempfile

import elftools.elf.elffile as elffile

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import match as M  # noqa: E402
import funcs as F  # noqa: E402
import build_all as BA  # noqa: E402

OUT = REPO / "match" / "build" / "PSZERO-near-test.nds"
TEXT_START, TEXT_END = 0x02000000, 0x020F6058


def gap_map():
    """Locate every gap object's address range by content."""
    spans = []
    cur = None
    for line in (REPO / "match" / "dsdproj" / "delinks" / "arm9.txt"
                 ).read_text().splitlines():
        m = re.match(r"src/arm9/(\S+)\.c:", line.strip())
        if m:
            cur = m.group(1)
            continue
        m2 = re.match(r"\.text\s+start:0x([0-9a-f]+) end:0x([0-9a-f]+)",
                      line.strip())
        if m2 and cur:
            spans.append((int(m2.group(1), 16), int(m2.group(2), 16)))
            cur = None
    spans.sort()
    rom = (REPO / "assets" / "extracted" / "arm9" / "arm9.bin").read_bytes()
    base = TEXT_START
    gaps = []
    prev = TEXT_START
    for s, e in spans:
        if s > prev:
            gaps.append((prev, s))
        prev = max(prev, e)
    if prev < TEXT_END:
        gaps.append((prev, TEXT_END))
    object_list = (REPO / "match" / "build" / "objects.txt").read_text()
    ref = {path.replace("\\", "/").rsplit("/", 1)[-1]
           for path in re.findall(r'"([^"\n]+\.o)"', object_list)}
    files = sorted((REPO / "match" / "dsdproj" / "arm9").glob("_dsd_gap@*.o"))
    files = [fp for fp in files if fp.name in ref]
    texts = []
    for fp in files:
        with fp.open("rb") as stream:
            e = elffile.ELFFile(stream)
            section = e.get_section_by_name(".text")
            if section is not None:
                texts.append((fp, section.data()))
    lookup = {}
    used = set()
    for gs, ge in gaps:
        rom_slice = rom[gs - base:ge - base]
        hit = None
        for fp, t in texts:
            if id(fp) in used:
                continue
            if len(t) == len(rom_slice) and t == rom_slice:
                hit = fp
                break
        if hit is None:
            raise SystemExit(f"gap object for 0x{gs:08x}-0x{ge:08x} not found "
                             f"by content - dsd delink output changed?")
        used.add(id(hit))
        lookup[(gs, ge)] = hit
    return gaps, lookup


def patch_gap_object(obj_path: pathlib.Path, offset_in_text: int,
                     payload: bytes, slots: set[int], rom: bytes,
                     faddr: int, span: int):
    """Write payload at offset_in_text inside the gap object's .text."""
    data = bytearray(obj_path.read_bytes())
    e_shoff = struct.unpack_from("<I", data, 0x20)[0]
    e_shentsize = struct.unpack_from("<H", data, 0x2E)[0]
    e_shnum = struct.unpack_from("<H", data, 0x30)[0]
    secs = [struct.unpack_from("<10I", data, e_shoff + k * e_shentsize)
            for k in range(e_shnum)]
    strtabs = [f for f in secs if f[1] == 3]
    if not strtabs:
        return "error", "no strtab"
    stroff, strsz = strtabs[-1][4], strtabs[-1][5]
    text_idx = None
    for i, f in enumerate(secs):
        start = stroff + f[0]
        if f[1] != 1 or start >= len(data) or start >= stroff + strsz:
            continue
        end = data.index(b"\0", start)
        if data[start:end].decode("ascii", "replace") == ".text":
            text_idx = i
            break
    if text_idx is None:
        return "error", "no .text section"
    f = secs[text_idx]
    off, size = f[4], f[5]
    if len(payload) > span:
        return "too-big", (f"compiled 0x{len(payload):x} > true span "
                           f"0x{span:x} - would overwrite the next function")
    if offset_in_text < 0 or span < 0 or offset_in_text + span > size:
        return "error", "candidate plus retained tail overruns the gap object"
    if faddr < 0 or faddr + span > len(rom):
        return "error", "function span is outside extracted ARM9 bytes"
    if any(slot < 0 or slot + 4 > len(payload) for slot in slots):
        return "error", "relocation word is outside the candidate"
    new = bytearray(payload)
    for slot in sorted(slots):
        new[slot:slot + 4] = rom[faddr + slot:faddr + slot + 4]
    if len(payload) < span:
        new += rom[faddr + len(payload):faddr + span]
    data[off + offset_in_text:off + offset_in_text + len(new)] = new
    struct.pack_into("<I", data, e_shoff + text_idx * e_shentsize + 0x20, 2)
    obj_path.write_bytes(bytes(data))
    if len(payload) == span:
        return "swapped", f"0x{len(payload):x} swapped"
    return "padded", (f"code 0x{len(payload):x} + original tail "
                      f"0x{span - len(payload):x} (span kept 0x{span:x})")


def main() -> int:
    near = REPO / "drafts" / "near" / "arm9"
    cands = sorted(near.glob("FUN_*.c"))
    if not cands:
        print("no near candidates (drafts/near/arm9/FUN_*.c)")
        return 1

    funcs = {f["name"]: f for f in F.load_funcs()}
    reach = F.load_reach()
    rom = (REPO / "assets" / "extracted" / "arm9" / "arm9.bin").read_bytes()
    rom_base = 0x02000000
    launch = (os.environ.get("MWLDARM_LAUNCHER", "").split() or ["wine"]) if os.name != "nt" else []

    ws = pathlib.Path(tempfile.mkdtemp(prefix="near_rom_"))
    proj = ws / "dsdproj"
    shutil.copytree(REPO / "match" / "dsdproj", proj)
    wb = ws / "build"
    shutil.copytree(REPO / "match" / "build", wb)
    env = dict(os.environ, LM_LICENSE_FILE=str(M.LICENSE))
    gaps, gap_lookup = gap_map()

    swapped = padded = skipped = problems = 0
    print(f"swapping {len(cands)} near candidates into the gap objects ...")
    for p in cands:
        name = p.stem
        addr = int(name[4:], 16)
        inv = funcs.get(name)
        if inv is None or inv["module"] not in ("main", "arm9"):
            print(f"  SKIP {name}: not in the main-module inventory")
            skipped += 1
            continue
        if reach.get(addr) not in ("call_reachable", "indirect_only"):
            print(f"  SKIP {name}: not live ({reach.get(addr, 'unclassified')})")
            skipped += 1
            continue
        src_text = p.read_text(encoding="utf-8", errors="replace")
        flags = M.apply_flags_marker(M.DEFAULT_FLAGS, src_text)
        version = M.version_marker(src_text)
        obj = M.compile_c(p, version, flags)
        if obj is None:
            print(f"  FAIL {name}: compile failed ({version})")
            problems += 1
            continue
        payload, _, reloc_info = M.extract_func(obj, name)
        if not payload:
            print(f"  FAIL {name}: no function body in compiler output")
            problems += 1
            continue
        slots = {r["offset"] for r in reloc_info}
        gap = next(((s, e) for s, e in gaps if s <= addr < e), None)
        if gap is None:
            print(f"  SKIP {name}: 0x{addr:08x} inside a banked span?")
            skipped += 1
            continue
        gs, ge = gap
        objfile = gap_lookup[(gs, ge)]
        span = min(F.true_size(inv, list(funcs.values())), ge - addr)
        if len(payload) <= span:
            target = rom[addr - rom_base:addr - rom_base + len(payload)]
            checks = M.verify_relocs(addr, target, reloc_info,
                                     "-noThumb" not in flags)
            if len(checks) != len(reloc_info) or any(c[4] is not True for c in checks):
                print(f"  SKIP {name}: relocation positions/targets not verified")
                skipped += 1
                continue
        status, detail = patch_gap_object(proj / "arm9" / objfile.name,
                                          addr - gs, bytes(payload), slots,
                                          rom, addr - rom_base, span)
        if status == "swapped":
            swapped += 1
        elif status == "padded":
            padded += 1
        elif status == "too-big":
            skipped += 1
        else:
            problems += 1
        print(f"  {status:<7} {name}: {detail} [{objfile.name}]")

    prefix = str(REPO / "match" / "dsdproj")
    lines = (REPO / "match" / "build" / "objects.txt").read_text(
        encoding="utf-8").splitlines()
    (wb / "objects.txt").write_text(
        "\n".join(ln.replace(prefix, str(proj))
                 .replace(prefix.replace("\\", "/"), str(proj))
                 .replace("match/dsdproj", str(proj))
                 for ln in lines) + "\n",
        encoding="utf-8")
    rc = subprocess.run(
        [*launch, str(M.MW / "dsi" / "1.1" / "mwldarm.exe"),
         "-proc", "arm946e", "-nostdlib", "-interworking",
         "-msgstyle", "gcc", "-main", "", "-o",
         str(wb / "arm9_linked.o"),
         f"@{wb / 'objects.txt'}", str(wb / "arm9.lcf")],
        capture_output=True, text=True, env=env, cwd=str(ws))
    if rc.returncode != 0:
        print("LINK FAILED:\n" + (rc.stdout + rc.stderr)[-2000:])
        print("(workspace kept at " + str(ws) + ")")
        return 1

    linked = (wb / "build" / "arm9.o").read_bytes()
    ndiff = sum(1 for a, b in zip(linked, rom) if a != b)
    print(f"relinked arm9: {ndiff} bytes differ from the ROM "
          f"(expected - eligible near candidates are now live)")

    shutil.copy2(wb / "build" / "arm9.o", REPO / "match" / "build" / "build" / "arm9.o")
    try:
        BA.build_rom_from_linked_modules(OUT)
    finally:
        # restore clean arm9.o from assets/extracted/arm9/arm9.bin
        shutil.copy2(REPO / "assets" / "extracted" / "arm9" / "arm9.bin",
                     REPO / "match" / "build" / "build" / "arm9.o")
    shutil.rmtree(ws, ignore_errors=True)
    print(f"\nNEAR-TEST ROM written: {OUT.relative_to(REPO)} "
          f"({swapped} swapped, {padded} padded, {skipped} skipped, "
          f"{problems} problems)")
    print("load it in melonDS and play - a crash/glitch localizes the "
          "failing candidate; report which area broke")
    return 0 if problems == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
