"""Match a single function: compile candidate C with mwccarm and compare the
result to the function's bytes in the real Phantasy Star Zero (USA, C24E)
binary, relocation-aware.

Ported from tangOS-decomps/pictochat-decomp (MIT) and pszm-decomp, adapted
for Phantasy Star Zero (NTR-C24E-USA).

Almost every real function pools an absolute address (a global, a callee),
which the compiler emits as a relocation slot of zeroes plus a reloc entry,
while the binary has the final linked address there. So a correct match is:
every instruction word identical AND every reloc slot lined up - not a raw
byte-for-byte compare.

Usage:
    python tools/match.py --c src/arm9/FUN_02000800.c --func FUN_02000800 \\
        --addr 0x02000800 --size 0x130 --module arm9 \\
        --version dsi/1.1

Without --version, uses the canonical pinned version (see CANONICAL below).
"""
import argparse
import os
import pathlib
import re
import subprocess
import tempfile

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from elftools.elf.elffile import ELFFile

REPO = pathlib.Path(__file__).resolve().parent.parent

MW = (pathlib.Path(os.environ["MWCCARM_DIR"]).expanduser().resolve()
      if os.environ.get("MWCCARM_DIR")
      else REPO / "tools" / "mwccarm")
MW_FROM_ENV = bool(os.environ.get("MWCCARM_DIR"))
LICENSE = MW / "license.dat"
DSD_EXTRACT = REPO / "assets" / "extracted"

# Module name -> (bin path relative to assets/extracted/, base RAM address).
# Derived from the dsd extraction of Phantasy Star 0 (USA, C24E):
#   ARM9  loads at 0x02000000 (entry 0x02000800, size 0x101880, bss to 0x0211E640)
#   ITCM  autoload at 0x01FF8000 (code 0x3C0)
#   DTCM  autoload at 0x027E0000 (code 0x60, bss 0x20)
#   ov000..ov018 load at 0x0211E640 (slot 0)
#   ov019..ov031 load at 0x02197F80 (slot 1)
#   ARM7  loads at 0x02380000
MODULES = {
    "arm9": ("arm9/arm9.bin", 0x02000000),
    "itcm": ("arm9/itcm.bin", 0x01FF8000),
    "dtcm": ("arm9/dtcm.bin", 0x027E0000),
    "arm7": ("arm7/arm7.bin", 0x02380000),
}
for _oid in range(32):
    _base = 0x0211E640 if _oid < 19 else 0x02197F80
    _rel = f"arm9_overlays/ov{_oid:03d}.bin"
    MODULES[f"arm9ov{_oid:03d}"] = (_rel, _base)
    MODULES[f"arm9ov{_oid}"] = (_rel, _base)
    MODULES[f"ov{_oid:03d}"] = (_rel, _base)

DEFAULT_FLAGS = "-O4,p -enum int -lang c99 -char signed -interworking -thumb -proc arm946e -gccext,on -msgstyle gcc"
DEFAULT_FLAGS_ARM7 = "-O4,p -enum int -lang c99 -char signed -interworking -thumb -proc arm7tdmi -gccext,on -msgstyle gcc"

DSI_SWEEP = ["dsi/1.1", "dsi/1.1p1", "dsi/1.2", "dsi/1.2p1", "dsi/1.2p2",
             "dsi/1.3", "dsi/1.3p1", "dsi/1.6sp1", "dsi/1.6sp2"]
CW20_SWEEP = ["2.0/base", "2.0/sp1", "2.0/sp1p2", "2.0/sp1p5", "2.0/sp1p6",
              "2.0/sp1p7", "2.0/sp2", "2.0/sp2p2", "2.0/sp2p3", "2.0/sp2p4"]
NTR_SWEEP = ["1.2/base", "1.2/sp2", "1.2/sp2p3", "1.2/sp3", "1.2/sp4"] + CW20_SWEEP
SWEEP = DSI_SWEEP + NTR_SWEEP

PINNED = ["2.0/sp2p3", "2.0/sp2p4", "2.0/sp2", "dsi/1.1"]
CANONICAL = "2.0/sp2p3"  # see notes/compiler-identification.md

md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
md_thumb = Cs(CS_ARCH_ARM, 0x10)  # CS_MODE_THUMB


def target_bytes(module: str, addr: int, size: int) -> bytes:
    rel_path, base = MODULES[module]
    data = (DSD_EXTRACT / rel_path).read_bytes()
    off = addr - base
    if off < 0 or off + size > len(data):
        raise SystemExit(f"address 0x{addr:08x} size 0x{size:x} out of range for "
                          f"module {module} (base 0x{base:08x}, size 0x{len(data):x})")
    return data[off:off + size]


def veneer_len(module: str, addr: int) -> int:
    """Length of a linker interworking veneer sitting at addr whose target is
    the code immediately after it, else 0. Recognized shapes:
      ARM   (12 B): ldr ip,[pc,#0]; bx ip; .word addr+12
      Thumb  (8 B): ldr r3,[pc,#0]; bx r3; .word (addr+8)|1
    Ghidra merges such a veneer into the following function's symbol, so a
    file named FUN_<addr> may have its compiled body at addr+veneer_len."""
    import struct
    try:
        raw = target_bytes(module, addr, 12)
    except SystemExit:
        return 0
    w0, w1, w2 = struct.unpack("<3I", raw)
    if w0 == 0xE59FC000 and w1 == 0xE12FFF1C and w2 == addr + 12:
        return 12
    if w0 == 0x47184B00 and w1 == ((addr + 8) | 1):
        return 8
    return 0


def body_addr(module: str, addr: int, src_text: str) -> int:
    """Address of the compiled body for a file named after addr. A file opts
    in to veneer skipping with a `// veneer: <len>` marker; the marker is
    verified against the ROM bytes (a wrong or stale marker raises)."""
    m = re.search(r"^// veneer: (0x[0-9a-fA-F]+|\d+)\s*$", src_text, re.M)
    if not m:
        return addr
    want = int(m.group(1), 0)
    got = veneer_len(module, addr)
    if got != want:
        raise SystemExit(f"0x{addr:08x}: '// veneer: {want}' marker but ROM "
                         f"veneer length is {got}")
    return addr + want


def apply_flags_marker(flags: str, src_text: str, allow_thumb_heuristic: bool = True) -> str:
    """Apply a source file's `//cpp` and `// flags: ...` overrides to a base
    flags string.
    """
    if re.search(r"^//cpp\s*$", src_text, re.M) and "-lang c99" in flags:
        flags = flags.replace("-lang c99", "-lang c++")
    if "// flags: " in src_text:
        extra = src_text.split("// flags: ")[1].split("\n")[0].strip()
        for tok in extra.split():
            m = re.match(r"^-O\d", tok)
            if m:
                flags = re.sub(r"-O\d[\w,]*", tok, flags)
            elif tok in ("-arm", "-noThumb"):
                flags = flags.replace(" -thumb", "")
            else:
                flags += " " + tok
    elif allow_thumb_heuristic and re.search(r"\basm\b", src_text) and "-thumb" in flags:
        flags = flags.replace(" -thumb", "")
    return flags


def version_marker(src_text: str, default: str = CANONICAL) -> str:
    """Return the file's `// version: <ver>` compiler override, else default."""
    if "// version: " in src_text:
        return src_text.split("// version: ")[1].split("\n")[0].strip()
    return default


def symbol_marker(src_text: str, default: str) -> str:
    """Return the file's `// symbol: <name>` ELF symbol override, else default.
    Used for compiler-emitted C++ symbols whose Itanium mangled name cannot
    carry extern "C" linkage (e.g. multiple-inheritance this-adjustor thunks)."""
    m = re.search(r"^// symbol: (\S+)\s*$", src_text, re.M)
    return m.group(1) if m else default


def _default_launcher() -> list[str]:
    env = os.environ.get("MWCCARM_LAUNCHER")
    if env is not None:
        return env.split()
    if os.name != "nt":
        wibo = REPO / "tools" / "bin" / "wibo"
        if wibo.is_file():
            return [str(wibo)]
    return []


def compile_c(cfile: pathlib.Path, version: str, flags: str) -> bytes | None:
    exe = MW / version / "mwccarm.exe"
    if not exe.is_file():
        print(f"  ! no compiler at {version}")
        return None
    launcher = _default_launcher()
    env = dict(os.environ,
               LM_LICENSE_FILE=str(LICENSE),
               MWCINCLUDES=str(REPO / "include"))
    with tempfile.TemporaryDirectory() as td:
        out_o = pathlib.Path(td) / "out.o"
        cmd = [*launcher, str(exe), *flags.split(), "-c", str(cfile), "-o", str(out_o)]
        try:
            r = subprocess.run(cmd, capture_output=True, text=True, env=env, timeout=90)
        except subprocess.TimeoutExpired:
            print(f"  ! compile timed out ({version})")
            return None
        if r.returncode != 0 or not out_o.is_file():
            err = (r.stdout + r.stderr).strip()[-400:]
            print(f"  ! compile failed ({version}): {err}")
            return None
        return out_o.read_bytes()


def assemble_s(sfile: pathlib.Path, version: str = CANONICAL, flags: str = "-proc arm5TE") -> bytes | None:
    """Assemble a standalone .s file using mwasmarm.exe from the pinned toolchain."""
    exe = MW / version / "mwasmarm.exe"
    if not exe.is_file():
        print(f"  ! no assembler at {version}")
        return None
    launcher = _default_launcher()
    env = dict(os.environ, LM_LICENSE_FILE=str(LICENSE))
    with tempfile.TemporaryDirectory() as td:
        out_o = pathlib.Path(td) / "out.o"
        cmd = [*launcher, str(exe), *flags.split(), "-o", str(out_o), str(sfile)]
        try:
            r = subprocess.run(cmd, capture_output=True, text=True, env=env, timeout=90)
        except subprocess.TimeoutExpired:
            print(f"  ! assemble timed out ({version})")
            return None
        if r.returncode != 0 or not out_o.is_file():
            err = (r.stdout + r.stderr).strip()[-400:]
            print(f"  ! assemble failed ({version}): {err}")
            return None
        return out_o.read_bytes()


def extract_func(obj: bytes, func: str):
    import io
    elf = ELFFile(io.BytesIO(obj))
    symtab = elf.get_section_by_name(".symtab")
    sym = next((s for s in symtab.iter_symbols() if s.name == func), None)
    if sym is None:
        return None, None, None
    sec = elf.get_section(sym["st_shndx"])
    start, size = sym["st_value"], sym["st_size"]
    code = sec.data()[start:start + size]
    relocs = set()
    reloc_info = []
    rel = elf.get_section_by_name(".rel" + sec.name) or elf.get_section_by_name(".rela" + sec.name)
    if rel is not None:
        rsymtab = elf.get_section(rel["sh_link"])
        is_rela = rel.name.startswith(".rela")
        for r in rel.iter_relocations():
            o = r["r_offset"] - start
            if 0 <= o < size:
                relocs.add(o & ~3)
                relocs.add((o + 3) & ~3)
                rsym = rsymtab.get_symbol(r["r_info_sym"])
                addend = r["r_addend"] if is_rela else 0
                reloc_info.append({"offset": o, "type": r["r_info_type"], "sym": rsym.name, "addend": addend})
    return code, relocs, reloc_info


SYM_ADDR_RE = re.compile(r"_([0-9a-fA-F]{8})$")
CPP_METHOD_ADDR_RE = re.compile(
    r"^_ZN\d+[A-Za-z0-9_]+(?:12FUN_([0-9a-fA-F]{8})|\d+FUN_overlay_\d+__([0-9a-fA-F]{8}))E"
)
R_ARM_ABS32 = 2
BRANCH_MNEMONICS = {"bl", "blx", "b", "bx"}


# Confirmed ROM entry points; see the resume2 helper review evidence.
# Relocation masking alone cannot distinguish signedness/comparison semantics.
VERIFIED_HELPER_TARGETS = {
    "_s32_div_f": 0x0200A3A0,
    "_u32_div_f": 0x0200A5AC,
    "_fgr": 0x02009750,
    "_fls": 0x020097AC,
    "_ll_mul": 0x0200A380,
    "_ull_mul": 0x0200A380,
    "_fflt": 0x02009C84,
    "_ffix": 0x02009C50,
    "_d2f": 0x02008718,
    "_ll_udiv": 0x0200A338,
    "_ull_mod": 0x0200A344,
    "_dneq": 0x020096C4,
    "_dls": 0x0200959C,
    "_dgr": 0x02009460,
    "_dmul": 0x02008970,
    "_dsub": 0x02008E88,
    "_dadd": 0x02008400,
    "_dfix": 0x0200881C,
    "_fadd": 0x0200923C,
    "_fsub": 0x02009F00,
    "__clear": 0x0200C938,
}


def sym_target_addr(name: str):
    if name in VERIFIED_HELPER_TARGETS:
        return VERIFIED_HELPER_TARGETS[name]
    m = SYM_ADDR_RE.search(name)
    if m:
        return int(m.group(1), 16)
    m_cpp = CPP_METHOD_ADDR_RE.match(name)
    if m_cpp:
        return int(m_cpp.group(1) or m_cpp.group(2), 16)
    if name.startswith("FUN_"):
        raise ValueError(
            f"Malformed address-encoded function symbol {name!r}: "
            "expected exactly eight hexadecimal address digits"
        )
    return None


def verify_relocs(func_addr: int, target_code: bytes, reloc_info: list, is_thumb: bool):
    """[(offset, sym, expected_addr, found_addr_or_None, ok_or_None), ...] for
    every relocation with an encoded address or a verified helper binding."""
    import struct
    out = []
    for info in reloc_info:
        want = sym_target_addr(info["sym"])
        if want is None:
            continue
        off, rtype = info["offset"], info["type"]
        addend = info.get("addend", 0)
        if off + 4 > len(target_code):
            out.append((off, info["sym"], want, None, None))
            continue
        if rtype == R_ARM_ABS32:
            found = struct.unpack_from("<I", target_code, off)[0]
            exp = (want + addend) & 0xFFFFFFFF
            exp_thumb = ((want | 1) + addend) & 0xFFFFFFFF
            out.append((off, info["sym"], exp, found, found in (exp, exp_thumb)))
            continue
        cs = md_thumb if is_thumb else md
        insn = next(cs.disasm(target_code[off:off + 4], func_addr + off), None)
        if insn is None or insn.mnemonic not in BRANCH_MNEMONICS or "#0x" not in insn.op_str:
            out.append((off, info["sym"], want, None, None))
            continue
        found = int(insn.op_str.rsplit("#", 1)[-1], 16)
        out.append((off, info["sym"], want, found, found == want))
    return out


def compare_bytes(target: bytes, cand: bytes, reloc_info: list):
    """Compare every byte outside the actual four-byte relocation fields."""
    if len(target) != len(cand):
        return False, 999
    masked = set()
    for reloc in reloc_info:
        offset = reloc["offset"]
        if offset < 0 or offset + 4 > len(cand):
            return False, 999
        masked.update(range(offset, offset + 4))
    differences = sum(t != c for i, (t, c) in enumerate(zip(target, cand))
                      if i not in masked)
    return differences == 0, differences


def compare(target: bytes, cand: bytes, relocs: set, verbose: bool = True):
    if len(target) != len(cand):
        if verbose:
            print(f"  size differs: target 0x{len(target):x} vs candidate 0x{len(cand):x}")
        return False, 999
    ok = True
    ndiff = 0
    for i in range(0, len(target), 4):
        tw = target[i:i + 4]
        cw = cand[i:i + 4]
        if i in relocs:
            tag = "reloc (wildcard)"
            match = True
        else:
            match = tw == cw
            tag = "OK" if match else "<<< MISMATCH"
        if not match:
            ok = False
            ndiff += 1
        if verbose:
            ti = next(md.disasm(tw, 0), None)
            ci = next(md.disasm(cw, 0), None)
            ts = f"{ti.mnemonic} {ti.op_str}" if ti else tw.hex()
            cs = f"{ci.mnemonic} {ci.op_str}" if ci else cw.hex()
            print(f"   +0x{i:02x} | {tw.hex()} {ts:24} | {cw.hex()} {cs:24} | {tag}")
    return ok, ndiff


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--c", required=True)
    ap.add_argument("--func", required=True)
    ap.add_argument("--addr", required=True, type=lambda x: int(x, 0))
    ap.add_argument("--size", required=True, type=lambda x: int(x, 0))
    ap.add_argument("--module", default="arm9", choices=list(MODULES))
    ap.add_argument("--version", default=None, help="check a single version")
    ap.add_argument("--versions", default=None, help="comma list to sweep")
    ap.add_argument("--all", action="store_true", help="sweep every known version")
    ap.add_argument("--brief", action="store_true", help="terse: per-version pass/fail")
    ap.add_argument("--flags", default=None)
    args = ap.parse_args()

    flags = args.flags or (DEFAULT_FLAGS_ARM7 if args.module == "arm7" else DEFAULT_FLAGS)
    cfile = pathlib.Path(args.c)
    src_text = ""
    try:
        src_text = cfile.read_text(encoding="utf-8")
        flags = apply_flags_marker(flags, src_text, allow_thumb_heuristic=not args.flags)
    except OSError:
        pass
    sym_name = symbol_marker(src_text, args.func)

    tgt = target_bytes(args.module, args.addr, args.size)
    hexstr = tgt.hex()
    shown = hexstr if (not args.brief or len(hexstr) <= 128) else f"{hexstr[:128]}... ({len(tgt)} bytes)"
    print(f"TARGET {args.func} @ 0x{args.addr:08x} size 0x{args.size:x} [{args.module}]  bytes: {shown}")

    if args.version:
        versions = [args.version]
    elif args.versions:
        versions = [v.strip() for v in args.versions.split(",") if v.strip()]
    elif args.all:
        versions = SWEEP
    else:
        versions = [CANONICAL]

    is_thumb = "-thumb" in flags
    matched = []
    closest = None
    for v in versions:
        obj = compile_c(cfile, v, flags)
        if obj is None:
            continue
        code, relocs, reloc_info = extract_func(obj, sym_name)
        if code is None:
            print(f"  {v}: symbol '{sym_name}' not found in object")
            continue
        if not args.brief:
            print(f"\n=== mwccarm {v} ===")
        ok, ndiff = compare(tgt, code, relocs, verbose=not args.brief)
        bytes_ok, byte_diff = compare_bytes(tgt, code, reloc_info)
        ok = ok and bytes_ok
        if not bytes_ok:
            print(f"  ! {byte_diff} non-relocation byte(s) differ (exact field mask)")
        reloc_checks = verify_relocs(args.addr, tgt, reloc_info, is_thumb)
        bad_relocs = [r for r in reloc_checks if r[4] is False]
        if bad_relocs:
            ok = False
            for off, sym, want, found, _ in bad_relocs:
                print(f"  ! reloc @ +0x{off:x} '{sym}' claims target 0x{want:08x}, "
                      f"real bytes resolve to 0x{found:08x}" if found is not None else
                      f"  ! reloc @ +0x{off:x} '{sym}' claims target 0x{want:08x}, "
                      f"real bytes don't decode as a data word or branch")
        if ok:
            matched.append(v)
            if args.brief:
                print(f"  {v}: MATCH")
        else:
            if args.brief:
                print(f"  {v}: {ndiff} word(s) differ" +
                      (f", {len(bad_relocs)} reloc target(s) wrong" if bad_relocs else ""))
            if closest is None or ndiff < closest[0]:
                closest = (ndiff, v, code, relocs)

    if args.brief and not matched and closest is not None:
        print(f"\n--- closest: {closest[1]} ({closest[0]} differ) ---")
        compare(tgt, closest[2], closest[3], verbose=True)

    print("\n" + "=" * 40)
    print("MATCHING VERSIONS:", ", ".join(matched) if matched else "none")


if __name__ == "__main__":
    main()
