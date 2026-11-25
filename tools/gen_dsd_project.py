"""Generate a hand-built dsd project for Phantasy Star Zero (USA, C24E)
(config.yaml + delinks.txt + symbols.txt per module), bypassing `dsd init`
(which fails on frameless Thumb leaf functions in ARM9).

Memory layout from extracted/:
- arm9: 0x02000000..0x02101880 image (1,054,848 B), bss 0x02101880..0x0211E640
  - .text:   0x02000000..0x020F6058
  - .ctor:   0x020F6058..0x020F60F0 (37 static init entries + 4-byte 0 terminator)
  - .rodata: 0x020F60F0..0x02101880
  - .bss:    0x02101880..0x0211E640
- itcm: 0x01FF8000..0x01FF83C0 (960 B code, 0 B bss)
- dtcm: 0x027E0000..0x027E0060 (96 B data, 32 B bss -> 0x027E0080)
- overlays ov000..ov018 at 0x0211E640, ov019..ov031 at 0x02197F80

Usage: python tools/gen_dsd_project.py [output_dir]
"""
import io
import pathlib
import re
import struct
import sys

import yaml

REPO = pathlib.Path(__file__).resolve().parent.parent
BASE = 0x02000000
IMAGE_END = 0x02101880
CTOR_START = 0x020F6058
CTOR_END = 0x020F60F0      # 37 entries + 4-byte zero terminator in ROM
BSS_START = 0x02101880
BSS_END = 0x0211E640


def fxhash64(data: bytes) -> int:
    SEED = 0x51_7c_c1_b7_27_22_0a_95
    MASK = (1 << 64) - 1
    h = 0
    i, n = 0, len(data)

    def add(u):
        nonlocal h
        h = (((h << 5) | (h >> 59)) ^ u) * SEED & MASK

    while i + 8 <= n:
        add(struct.unpack_from("<Q", data, i)[0]); i += 8
    if i + 4 <= n:
        add(struct.unpack_from("<I", data, i)[0]); i += 4
    if i + 2 <= n:
        add(struct.unpack_from("<H", data, i)[0]); i += 2
    if i < n:
        add(data[i])
    return h


def parse_header_span(text: str) -> int | None:
    """Bytes covered by a matched function, from its own header."""
    m = re.search(r"\(([^)]*)\)", text[:400])
    if not m:
        return None
    if not re.match(r"\s*(?:0x[0-9a-fA-F]+|\d+)(?:\b|$)", m.group(1)):
        return None
    vals = [(int(mo.group(1), 16 if mo.group(1).startswith("0x") else 10),
             bool(mo.group(2)))
            for mo in re.finditer(r"(0x[0-9a-fA-F]+|\d+)(-?\s*bytes?)?",
                                  m.group(1))]
    if not vals:
        return None
    total = vals[0][0]
    for v, is_bytes in vals[1:]:
        if is_bytes:
            total += v
    return total


def matched_funcs(subdir: str = "arm9", pattern: str = "FUN_[0-9a-f]*.c"):
    """[(addr, size, name, rel_src_path)] for every banked C/C++ and verified
    ASM function: address from the file name; size = the compiled/assembled
    symbol's own extent (via tools/match.py)."""
    from match import (compile_c, assemble_s, apply_flags_marker, version_marker,
                       symbol_marker, DEFAULT_FLAGS, body_addr)
    import elftools.elf.elffile as _ef
    out = []
    seen = set()
    sources = []
    src_dir = REPO / "src" / subdir
    if src_dir.exists():
        sources.extend((p, f"src/{subdir}/{p.name}") for p in sorted(src_dir.glob("FUN_*.c")))
    for p, rel_src in sources:
        if p.stem in seen:
            continue
        if not re.fullmatch(r"FUN_[0-9a-zA-Z_]+", p.stem):
            continue
        if p.stem.startswith("FUN_overlay_"):
            addr = int(p.stem[-8:], 16)
        else:
            if not re.fullmatch(r"FUN_[0-9a-f]{8}", p.stem):
                continue
            addr = int(p.stem[4:], 16)
        text = p.read_text(encoding="utf-8", errors="replace")
        if not p.stem.startswith("FUN_overlay_"):
            addr = body_addr("arm9", addr, text)
        if p.suffix == ".s":
            obj = assemble_s(p, version_marker(text))
        else:
            flags = apply_flags_marker(DEFAULT_FLAGS, text)
            obj = compile_c(p, version_marker(text), flags)
        if obj is None:
            raise SystemExit(f"banked file does not compile/assemble: {p}")
        e = _ef.ELFFile(io.BytesIO(obj))
        sym_name = symbol_marker(text, p.stem)
        sym = next(s for s in e.get_section_by_name(".symtab").iter_symbols()
                   if s.name == sym_name)
        seen.add(p.stem)
        out.append((addr, sym["st_size"], p.stem, rel_src))
    return sorted(out)


def main():
    out_dir = pathlib.Path(sys.argv[1]) if len(sys.argv) > 1 else REPO / "match" / "dsdproj"
    out_dir.mkdir(parents=True, exist_ok=True)
    (out_dir / "delinks").mkdir(exist_ok=True)
    (out_dir / "symbols").mkdir(exist_ok=True)
    (out_dir / "relocs").mkdir(exist_ok=True)

    arm9_bin = (REPO / "assets" / "extracted" / "arm9" / "arm9.bin").read_bytes()
    hash_arm9 = format(fxhash64(arm9_bin), "016x")

    def overlay_hash(overlay_id: int) -> str:
        data = (REPO / "assets" / "extracted" / "arm9_overlays" /
                f"ov{overlay_id:03d}.bin").read_bytes()
        return format(fxhash64(data), "016x")

    itcm_bin = (REPO / "assets" / "extracted" / "arm9" / "itcm.bin").read_bytes()
    dtcm_bin = (REPO / "assets" / "extracted" / "arm9" / "dtcm.bin").read_bytes()

    funcs = matched_funcs()

    lines = [
        f"    .text       start:0x{BASE:08x} end:0x{CTOR_START:08x} kind:code align:2",
        f"    .ctor       start:0x{CTOR_START:08x} end:0x{CTOR_END:08x} kind:rodata align:2",
        f"    .rodata     start:0x{CTOR_END:08x} end:0x{BSS_START:08x} kind:rodata align:2",
        f"    .bss        start:0x{BSS_START:08x} end:0x{BSS_END:08x} kind:bss align:8",
        "",
    ]
    for addr, size, name, rel_src in funcs:
        lines.append(f"{rel_src}:")
        sec = ".text" if addr < CTOR_START else ".rodata"
        lines.append(f"    {sec:<12}start:0x{addr:08x} end:0x{addr + size:08x}")
    (out_dir / "delinks" / "arm9.txt").write_text(
        "\n".join(lines) + "\n", encoding="utf-8", newline="\n")

    ov_yaml = yaml.safe_load((REPO / "assets" / "extracted" / "arm9_overlays" / "overlays.yaml").read_text())
    ovl = {o["id"]: o for o in ov_yaml["overlays"]}

    ov_cfg_lines = []
    for oid in range(32):
        ov_cfg_lines.append(f"""  - id: {oid}
    name: ov{oid:03d}
    object: ov{oid:03d}.o
    hash: "{overlay_hash(oid)}"
    delinks: ov{oid:03d}.txt
    symbols: ov{oid:03d}.symbols.txt
    relocations: ov{oid:03d}.relocs.txt""")

    cfg = f"""rom_config: ../../../assets/extracted/config.yaml
build_path: ../../build
delinks_path: .
main_module:
  name: arm9
  object: arm9.o
  hash: "{hash_arm9}"
  delinks: arm9.txt
  symbols: arm9.symbols.txt
  relocations: arm9.relocs.txt
autoloads:
  - kind: Itcm
    name: itcm
    object: itcm.o
    hash: "{format(fxhash64(itcm_bin), '016x')}"
    delinks: itcm.txt
    symbols: itcm.symbols.txt
    relocations: itcm.relocs.txt
  - kind: Dtcm
    name: dtcm
    object: dtcm.o
    hash: "{format(fxhash64(dtcm_bin), '016x')}"
    delinks: dtcm.txt
    symbols: dtcm.symbols.txt
    relocations: dtcm.relocs.txt
overlays:
""" + "\n".join(ov_cfg_lines) + "\n"

    (out_dir / "config.yaml").write_text(cfg, encoding="utf-8", newline="\n")

    (out_dir / "delinks" / "itcm.txt").write_text(
        "    .text       start:0x01ff8000 end:0x01ff83c0 kind:code align:2\n\n",
        encoding="utf-8", newline="\n")
    (out_dir / "delinks" / "dtcm.txt").write_text(
        "    .data       start:0x027e0000 end:0x027e0060 kind:data align:2\n"
        "    .bss        start:0x027e0060 end:0x027e0080 kind:bss align:4\n\n",
        encoding="utf-8", newline="\n")

    proj = out_dir / "arm9"
    proj.mkdir(parents=True, exist_ok=True)
    for n in ("arm9", "itcm", "dtcm"):
        (proj / f"{n}.txt").write_text(
            (out_dir / "delinks" / f"{n}.txt").read_text(encoding="utf-8"),
            encoding="utf-8", newline="\n")
        (proj / f"{n}.symbols.txt").write_text("", encoding="utf-8", newline="\n")
        (proj / f"{n}.relocs.txt").write_text("", encoding="utf-8", newline="\n")

    for oid in range(32):
        info = ovl[oid]
        base = int(info["base_address"])
        code = int(info["code_size"])
        bss = int(info["bss_size"])
        sec_lines = [f"    .text       start:0x{base:08x} end:0x{base + code:08x} kind:code align:2"]
        if bss > 0:
            sec_lines.append(f"    .bss        start:0x{base + code:08x} end:0x{base + code + bss:08x} kind:bss align:4")
        sec_lines.append("")
        ovdir = REPO / "src" / f"ov{oid:03d}"
        has_ov = ovdir.exists() and any(ovdir.glob("FUN_*.c"))
        if has_ov:
            ofuncs = matched_funcs(f"ov{oid:03d}")
            for addr, size, name, rel_src in ofuncs:
                sec_lines.append(f"{rel_src}:")
                sec_lines.append(f"    .text       start:0x{addr:08x} end:0x{addr + size:08x}")
        txt = "\n".join(sec_lines) + "\n"
        (proj / f"ov{oid:03d}.txt").write_text(txt, encoding="utf-8", newline="\n")
        (out_dir / "delinks" / f"ov{oid:03d}.txt").write_text(txt, encoding="utf-8", newline="\n")
        (proj / f"ov{oid:03d}.symbols.txt").write_text("", encoding="utf-8", newline="\n")
        (proj / f"ov{oid:03d}.relocs.txt").write_text("", encoding="utf-8", newline="\n")

    (proj / "config.yaml").write_text(cfg, encoding="utf-8", newline="\n")

    print(f"wrote {proj}")
    print(f"{len(funcs)} matched functions as file entries in arm9 delinks")
    print("next: dsd delink -c <dir>/arm9/config.yaml")


if __name__ == "__main__":
    main()
