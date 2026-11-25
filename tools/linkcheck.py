"""Link-based relocation verification for every banked function (stage 3 of
whole-project verification).

Usage: python tools/linkcheck.py            # whole corpus table + summary
       python tools/linkcheck.py --verbose  # per-slot detail for non-VERIFIED
Exit code 0 iff no WRONG verdicts.
"""
import argparse
import io
import pathlib
import re
import struct
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import match as M  # noqa: E402
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB  # noqa: E402
from elftools.elf.elffile import ELFFile  # noqa: E402

R_ARM_ABS32 = 2
BRANCH_TYPES = {1, 28}  # R_ARM_PC24, R_ARM_CALL
ARM_BRANCH_MNEM_RE = re.compile(
    r"^b(?:l|lx)?(?:eq|ne|cs|hs|cc|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)?$"
)
MD_ARM = Cs(CS_ARCH_ARM, CS_MODE_ARM)
MD_THUMB = Cs(CS_ARCH_ARM, CS_MODE_THUMB)


def full_relocs(obj: bytes, func: str):
    elf = ELFFile(io.BytesIO(obj))
    symtab = elf.get_section_by_name(".symtab")
    sym = next((s for s in symtab.iter_symbols() if s.name == func), None)
    sec = elf.get_section(sym["st_shndx"])
    rel = (elf.get_section_by_name(".rel" + sec.name)
           or elf.get_section_by_name(".rela" + sec.name))
    out = []
    if rel is None:
        return out, sym["st_value"], sym["st_size"]
    rsymtab = elf.get_section(rel["sh_link"])
    is_rela = rel.name.startswith(".rela")
    for r in rel.iter_relocations():
        off = r["r_offset"] - sym["st_value"]
        if 0 <= off < sym["st_size"]:
            addend = r["r_addend"] if is_rela else 0
            out.append((off, r["r_info_type"],
                        rsymtab.get_symbol(r["r_info_sym"]).name, addend))
    return out, sym["st_value"], sym["st_size"]


def sym_addr(name: str):
    return M.sym_target_addr(name)


def local_data_payload(obj: bytes, name: str, addend: int):
    """Whole, relocation-free local data; unsupported bindings stay BLIND."""
    if addend:
        return None
    elf = ELFFile(io.BytesIO(obj))
    # REL stores implicit addends in the referring bytes; this checker only
    # handles explicit-addend objects, avoiding an inferred interior binding.
    if any(sec["sh_type"] == "SHT_REL" for sec in elf.iter_sections()):
        return None
    symtab = elf.get_section_by_name(".symtab")
    symbols = [sym for sym in symtab.iter_symbols() if sym.name == name]
    if len(symbols) != 1:
        return None
    sym = symbols[0]
    if not isinstance(sym["st_shndx"], int):
        return None
    section_index = sym["st_shndx"]
    sec = elf.get_section(section_index)
    if (sec["sh_type"] != "SHT_PROGBITS" or not sec["sh_flags"] & 2
            or sec["sh_flags"] & 4):
        return None
    start, size = sym["st_value"], sym["st_size"]
    if not size:
        if sym["st_info"]["type"] != "STT_SECTION" or start:
            return None
        size = sec["sh_size"]
    if not size or start < 0 or start + size > sec["sh_size"]:
        return None
    for rel in elf.iter_sections():
        if rel["sh_type"] in ("SHT_REL", "SHT_RELA") and rel["sh_info"] == section_index:
            if any(start <= r["r_offset"] < start + size for r in rel.iter_relocations()):
                return None
    return sec.data()[start:start + size]


def local_data_check(obj: bytes, module: str, target: bytes, off: int,
                     rtype: int, symbol: str, addend: int):
    if rtype != R_ARM_ABS32:
        return None
    expected = local_data_payload(obj, symbol, addend)
    if expected is None:
        return None
    if off < 0 or off + 4 > len(target):
        return "WRONG", f"+0x{off:x} {symbol}: local data relocation outside span"
    destination = int.from_bytes(target[off:off + 4], "little")
    for data_module in dict.fromkeys((module, "arm9")):
        try:
            actual = M.target_bytes(data_module, destination, len(expected))
        except SystemExit:
            continue
        kind = "VERIFIED" if actual == expected else "WRONG"
        detail = "matches" if actual == expected else "differs"
        return kind, (f"+0x{off:x} {symbol}: local data {detail} at "
                      f"0x{destination:08x} ({len(expected)} bytes)")
    return "WRONG", f"+0x{off:x} {symbol}: local data target outside ROM images"


def branch_target(insn: int, where: int, mnemonic: str):
    imm24 = insn & 0x00FFFFFF
    off = imm24 << 2
    if mnemonic == "blx" and (insn & 0x01000000):
        off += 2
    if off & 0x02000000:
        off -= 0x04000000
    return (where + 8 + off) & 0xFFFFFFFF


def veneer_target(rom, addr, module):
    try:
        raw = M.target_bytes(module, addr, 8)
    except SystemExit:
        return None
    ins = list(MD_THUMB.disasm(raw, addr))
    if len(ins) >= 2 and ins[0].mnemonic == "ldr" and "[pc" in ins[0].op_str \
            and ins[1].mnemonic == "bx":
        m = re.search(r"#(0x[0-9a-fA-F]+|\d+)", ins[0].op_str)
        base = (addr + 4) & ~3
        off = int(m.group(1), 0) if m else 0
        pa = base + off
        try:
            return int.from_bytes(M.target_bytes(module, pa, 4), "little")
        except SystemExit:
            return None
    return None


def link_file(path: pathlib.Path, verbose=False):
    name = path.stem
    text = path.read_text(encoding="utf-8")
    if path.suffix == ".s":
        obj = M.assemble_s(path, M.version_marker(text))
    else:
        flags = M.apply_flags_marker(M.DEFAULT_FLAGS, text)
        obj = M.compile_c(path, M.version_marker(text), flags)
    if obj is None:
        return None, "compile failed"
    sym_name = M.symbol_marker(text, name)
    code, relocs, _ = M.extract_func(obj, sym_name)
    if code is None:
        return None, f"symbol {sym_name} missing"
    relocs_full, symaddr, symsize = full_relocs(obj, sym_name)
    addr = None
    if name.startswith("FUN_overlay_"):
        addr = int(name[-8:], 16)
        ov_id = int(name.split("__")[0][len("FUN_overlay_"):])
        module = f"ov{ov_id:03d}"
    elif re.fullmatch(r"FUN_[0-9a-f]{8}", name):
        addr = int(name[4:], 16)
        module = "arm9"
    else:
        module = "arm9"
    if addr is None:
        m = re.search(r"@ 0x([0-9a-fA-F]{8})", text)
        if not m:
            return None, "no @0xADDR header and name carries no address"
        addr = int(m.group(1), 16)
    if module == "arm9":
        addr = M.body_addr(module, addr, text)
    tgt = M.target_bytes(module, addr, len(code))
    rows = []
    for off, rtype, symp, addend in relocs_full:
        dest = sym_addr(symp)
        if dest is None:
            checked = local_data_check(obj, module, tgt, off, rtype, symp, addend)
            rows.append(checked if checked is not None else
                        ("BLIND", f"+0x{off:x} {symp} (no verified binding)"))
            continue
        if rtype == R_ARM_ABS32:
            if off + 4 > len(tgt):
                rows.append(("WRONG", f"+0x{off:x} ABS32 outside span"))
                continue
            rom_word = int.from_bytes(tgt[off:off + 4], "little")
            exp = dest + addend
            if rom_word == (exp & 0xFFFFFFFF):
                rows.append(("VERIFIED", f"+0x{off:x} {symp}+0x{addend:x}"))
            elif rom_word == ((dest | 1) + addend) & 0xFFFFFFFF:
                rows.append(("BENIGN", f"+0x{off:x} {symp}+0x{addend:x} (Thumb bit)"))
            else:
                rows.append(("WRONG", f"+0x{off:x} {symp}: linked 0x{exp & 0xffffffff:08x}"
                                      f" (+addend 0x{addend:x}), ROM 0x{rom_word:08x}"))
        elif rtype in (10, 16):  # R_ARM_THM_CALL, R_ARM_THM_XPC22 (Thumb bl / blx)
            if off + 4 > len(tgt):
                rows.append(("BLIND", f"+0x{off:x} {symp} (THM_CALL outside span)"))
                continue
            cs = MD_THUMB
            insn = next(cs.disasm(tgt[off:off + 4], addr + off), None)
            if insn is None or "#0x" not in insn.op_str:
                rows.append(("BLIND", f"+0x{off:x} {symp} (not a decodable branch)"))
                continue
            rom_dest = int(insn.op_str.rsplit("#", 1)[-1], 16)
            ok = rom_dest in (dest & 0xFFFFFFFF, dest | 1)
            if ok:
                rows.append(("VERIFIED", f"+0x{off:x} thumb-{insn.mnemonic} {symp}"))
            else:
                rows.append(("WRONG", f"+0x{off:x} thumb-{insn.mnemonic} names {symp}, "
                                      f"ROM targets 0x{rom_dest:08x}"))
        elif rtype == 11:  # R_ARM_THM_PC11
            hw = struct.unpack_from("<H", tgt, off)[0] if off + 2 <= len(tgt) else 0
            imm8 = hw & 0xFF
            off8 = imm8 << 1
            if off8 & 0x100:
                off8 -= 0x200
            rom_dest = (addr + off + 4 + off8) & 0xFFFFFFFF
            if rom_dest == (dest & 0xFFFFFFFF) or rom_dest == (dest | 1):
                rows.append(("VERIFIED", f"+0x{off:x} thumb-b {symp}"))
            else:
                rows.append(("WRONG", f"+0x{off:x} thumb-b names {symp}, ROM targets "
                                      f"0x{rom_dest:08x}"))
        elif rtype in BRANCH_TYPES:
            ins = None
            ins_is_arm = True
            for md, _ in ((MD_ARM, 0), (MD_THUMB, 0)):
                ins = next(md.disasm(tgt[off:off + 4], addr + off)
                           if md is MD_ARM else
                           MD_THUMB.disasm(tgt[off:off + 2], addr + off), None)
                if ins is not None and ARM_BRANCH_MNEM_RE.match(ins.mnemonic):
                    ins_is_arm = md is MD_ARM
                    break
                ins = None
            if ins is None or not ARM_BRANCH_MNEM_RE.match(ins.mnemonic):
                rows.append(("BLIND", f"+0x{off:x} {symp} (ROM not decodable branch)"))
                continue
            if ins_is_arm or ins.mnemonic in ("bl", "b"):
                rom_dest = branch_target(int.from_bytes(tgt[off:off + 4], "little"),
                                         addr + off, ins.mnemonic)
            else:
                hw = struct.unpack_from("<I", tgt, off)[0]
                hi, lo = (hw >> 16) & 0x7FF, hw & 0x7FF
                imm22 = (hi << 12) | (lo << 1)
                if imm22 & 0x400000:
                    imm22 -= 0x800000
                x = 1 if (hi & 0x1800) == 0x1800 else 0
                rom_dest = (addr + off + 4 + imm22 + x) & 0xFFFFFFFF
            if rom_dest == dest:
                rows.append(("VERIFIED", f"+0x{off:x} branch {symp}"))
                continue
            vt = veneer_target(tgt, rom_dest, module)
            if vt is not None and vt == (dest & 0xFFFFFFFF):
                rows.append(("BENIGN", f"+0x{off:x} branch -> veneer @0x{rom_dest:08x}"
                                       f" -> {symp}"))
                continue
            if rom_dest == (dest | 1):
                rows.append(("BENIGN", f"+0x{off:x} branch {symp} (Thumb bit)"))
                continue
            rows.append(("WRONG", f"+0x{off:x} branch names {symp}, ROM targets "
                                  f"0x{rom_dest:08x}"))
        else:
            rows.append(("BLIND", f"+0x{off:x} unhandled reloc type {rtype} ({symp})"))
    verdict = "VERIFIED"
    has_benign = has_blind = False
    for k, _ in rows:
        if k == "WRONG":
            verdict = "WRONG"
            break
        if k == "BENIGN":
            has_benign = True
        elif k == "BLIND":
            has_blind = True
    else:
        if has_blind:
            verdict = "BLIND"
        elif has_benign:
            verdict = "BENIGN"
    return rows, verdict


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--verbose", action="store_true")
    a = ap.parse_args()
    files = (sorted((REPO / "src" / "arm9").glob("*.c"))
             + sorted((REPO / "src").glob("ov*/*.c")))
    counts = {}
    wrong_files = []
    for f in files:
        rows, verdict = link_file(f)
        if rows is None:
            rows = [("ERROR", str(verdict))]
            verdict = "ERROR"
        if verdict == "VERIFIED" and rows == []:
            rows = [("VERIFIED", "no relocs")]
        kind = verdict
        counts[kind] = counts.get(kind, 0) + 1
        flag = "" if kind == "VERIFIED" else "   <<<"
        print(f"  {kind:9} {f.stem:26} ({len(rows)} reloc slot(s)){flag}")
        if kind == "WRONG":
            wrong_files.append(f.stem)
            for k2, d in rows:
                if k2 in ("WRONG", "BLIND"):
                    print(f"      {k2}: {d}")
        elif a.verbose and kind != "VERIFIED":
            for k2, d in rows:
                print(f"      {k2}: {d}")
    print("\n" + "=" * 50)
    print(f"LINK-VERIFICATION: {len(files)} files: " +
          ", ".join(f"{k}={v}" for k, v in sorted(counts.items())))
    if wrong_files:
        print("WRONG destination(s) in: " + ", ".join(wrong_files))
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
