#!/usr/bin/env python3
"""Extract non-C / ROM-only assembly functions locally from your copy of the ROM.

Modeled on zeroz41/pso-decomp's tools/orig_asm.py:
  - No disassembled ROM instructions (.s files) are ever committed to git.
  - config/orig_asm.txt stores only clean metadata (name, module, addr, size,
    mode, category).
  - Running this tool writes local assembly files into gitignored
    match/orig_asm/<module>/<name>.s directly from assets/extracted/ (extracted
    from your legally supplied ROM via `dsd rom extract`).
  - Whole-ROM builds (`tools/build_all.py`) already carve non-C ranges directly
    from assets/extracted/ via `dsd delink`, so no .s files need to exist in
    the repository.

Usage:
    python tools/orig_asm.py                  # extract all 150 entries to match/orig_asm/
    python tools/orig_asm.py --disasm         # include Capstone disassembly comments
    python tools/orig_asm.py --only FUN_02065510
"""
from __future__ import annotations

import argparse
import pathlib
import re
import struct
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
MANIFEST_PATH = REPO / "config" / "orig_asm.txt"
DEFAULT_OUT = REPO / "match" / "orig_asm"

ARM9_BASE = 0x02000000

ENTRY_RE = re.compile(
    r"^name=(\S+)\s+module=(\S+)\s+addr=0x([0-9a-fA-F]+)\s+"
    r"size=0x([0-9a-fA-F]+)\s+mode=(\S+)\s+category=(\S+)$"
)

HANDWRITTEN_CATEGORIES = frozenset({
    "nitrosdk_sys",
    "crt_runtime",
    "nitrosdk_math",
    "ds_protect",
    "arm_misc",
    "codec_ov016",
})


def load_orig_asm_manifest(repo: pathlib.Path | None = None) -> list[dict]:
    """Load metadata entries from config/orig_asm.txt (zero ROM bytes)."""
    root = (repo or REPO).resolve()
    manifest = root / "config" / "orig_asm.txt"
    if not manifest.is_file():
        return []
    entries: list[dict] = []
    for raw in manifest.read_text(encoding="utf-8", errors="replace").splitlines():
        line = raw.strip()
        if not line or line.startswith("#"):
            continue
        m = ENTRY_RE.match(line)
        if not m:
            raise ValueError(f"Invalid config/orig_asm.txt line: {line!r}")
        entries.append({
            "name": m.group(1),
            "module": m.group(2),
            "addr": int(m.group(3), 16),
            "size": int(m.group(4), 16),
            "mode": m.group(5),
            "category": m.group(6),
        })
    return entries


def _load_overlay_bases(extracted: pathlib.Path) -> dict[str, tuple[pathlib.Path, int]]:
    mods: dict[str, tuple[pathlib.Path, int]] = {
        "arm9": (extracted / "arm9" / "arm9.bin", ARM9_BASE),
    }
    ov_yaml = extracted / "arm9_overlays" / "overlays.yaml"
    if not ov_yaml.is_file():
        return mods
    cur_id = None
    cur_base = None
    cur_file = None
    for raw in ov_yaml.read_text(encoding="utf-8", errors="replace").splitlines():
        s = raw.strip()
        if s.startswith("- id:"):
            if cur_id is not None and cur_base is not None and cur_file:
                mods[f"ov{cur_id:03d}"] = (extracted / "arm9_overlays" / cur_file, cur_base)
            cur_id = int(s.split(":", 1)[1].strip())
            cur_base = None
            cur_file = None
        elif s.startswith("base_address:"):
            cur_base = int(s.split(":", 1)[1].strip(), 0)
        elif s.startswith("file_name:"):
            cur_file = s.split(":", 1)[1].strip()
    if cur_id is not None and cur_base is not None and cur_file:
        mods[f"ov{cur_id:03d}"] = (extracted / "arm9_overlays" / cur_file, cur_base)
    return mods


def _format_asm(entry: dict, raw_bytes: bytes, disasm: bool) -> str:
    name = entry["name"]
    addr = entry["addr"]
    size = entry["size"]
    mode = entry["mode"]
    cat = entry["category"]
    directive = ".thumb" if mode == "thumb" else ".arm"

    cs = None
    if disasm:
        try:
            from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
            cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB if mode == "thumb" else CS_MODE_ARM)
        except Exception:
            cs = None

    lines = [
        f"// {name} @ 0x{addr:08x} (0x{size:x}, {mode}, {cat})",
        "// Locally extracted from user ROM into gitignored match/orig_asm/ by tools/orig_asm.py",
        "\t.text",
        f"\t{directive}",
        f"\t.global {name}",
        f"{name}:",
    ]
    step = 2 if mode == "thumb" else 4
    fmt = "<H" if step == 2 else "<I"
    op = ".hword" if step == 2 else ".word"

    ins_comments: dict[int, str] = {}
    if cs is not None:
        for ins in cs.disasm(raw_bytes, addr):
            ins_comments[ins.address] = f"{ins.mnemonic} {ins.op_str}".strip()

    off = 0
    while off + step <= len(raw_bytes):
        val = struct.unpack_from(fmt, raw_bytes, off)[0]
        cur_addr = addr + off
        cmt = f"\t@ 0x{cur_addr:08x}: {ins_comments[cur_addr]}" if cur_addr in ins_comments else ""
        lines.append(f"\t{op} 0x{val:0{step * 2}x}{cmt}")
        off += step
    while off < len(raw_bytes):
        lines.append(f"\t.byte 0x{raw_bytes[off]:02x}")
        off += 1

    lines.append(f"\t.size {name}, .-{name}")
    return "\n".join(lines) + "\n"


def main(argv: list[str] | None = None) -> int:
    ap = argparse.ArgumentParser(
        description="Extract ROM-only assembly functions into gitignored match/orig_asm/."
    )
    ap.add_argument("--extracted", default=str(REPO / "assets" / "extracted"),
                    help="Path to dsd rom extract output (default: assets/extracted)")
    ap.add_argument("--out", default=str(DEFAULT_OUT),
                    help="Output directory (default: match/orig_asm)")
    ap.add_argument("--disasm", action="store_true",
                    help="Annotate extracted words with Capstone disassembly comments")
    ap.add_argument("--only", action="append", default=[],
                    help="Extract only the named function(s) (repeatable)")
    args = ap.parse_args(argv)

    extracted = pathlib.Path(args.extracted)
    if not (extracted / "arm9" / "arm9.bin").is_file():
        print(f"ERROR: {extracted / 'arm9' / 'arm9.bin'} not found.\n"
              f"Extract your legally supplied ROM first via `dsd rom extract`.", file=sys.stderr)
        return 1

    entries = load_orig_asm_manifest(REPO)
    if args.only:
        want = set(args.only)
        entries = [e for e in entries if e["name"] in want]

    mods = _load_overlay_bases(extracted)
    cache: dict[str, bytes] = {}
    out_root = pathlib.Path(args.out)

    written = 0
    for e in entries:
        mod = e["module"]
        if mod not in mods:
            print(f"ERROR: unknown module {mod} for {e['name']}", file=sys.stderr)
            return 1
        bin_path, base = mods[mod]
        if mod not in cache:
            cache[mod] = bin_path.read_bytes()
        blob = cache[mod]
        off = e["addr"] - base
        raw = blob[off:off + e["size"]]
        if len(raw) != e["size"]:
            print(f"ERROR: short read for {e['name']} @ 0x{e['addr']:08x}", file=sys.stderr)
            return 1
        dst = out_root / mod / f"{e['name']}.s"
        dst.parent.mkdir(parents=True, exist_ok=True)
        with dst.open("w", encoding="utf-8", newline="\n") as fh:
            fh.write(_format_asm(e, raw, args.disasm))
        written += 1

    print(f"Extracted {written} ROM-only asm files -> {out_root}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
