"""Decompile a Phantasy Star Zero (USA, C24E) function using matt-kempster/m2c
(`tools/m2c`).

Slices a target function's bytes from `assets/extracted/`, disassembles them
with Capstone (Thumb or ARM), reconstructs labels for branches (`.L_xxxx`),
literal-pool loads (`_pool_xxxx: .word ...`), and direct function calls
(`bl FUN_...`), and invokes `m2c` (`--target gba-mwcc-c` for Thumb or
`--target arm-mwcc-c` for ARM).

Usage:
  python tools/m2c_func.py --func FUN_overlay_10__0211efd8
  python tools/m2c_func.py --func FUN_020014f4 --arm
  python tools/m2c_func.py --addr 0x02071188 --size 0x34 --module arm9
  python tools/m2c_func.py --func FUN_020014f4 --dump-asm
"""
from __future__ import annotations

import argparse
import pathlib
import re
import struct
import subprocess
import sys
import tempfile

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import funcs as F  # noqa: E402
import match as M  # noqa: E402

M2C_PY = REPO / "tools" / "m2c" / "m2c.py"


def resolve_target(args: argparse.Namespace):
    by_name = F.by_name()
    func = args.func
    inv = by_name.get(func) if func else None

    module = args.module
    if not module:
        if func and func.startswith("FUN_overlay_"):
            ov_num = int(func.split("__")[0].split("_")[-1])
            module = f"ov{ov_num:03d}"
        elif inv:
            module = inv["module"]
        else:
            module = "arm9"

    addr = args.addr
    if addr is None:
        if inv:
            addr = inv["addr"]
        elif func:
            addr = int(func[-8:], 16)
        else:
            raise SystemExit("Pass --func or --addr")

    if not func:
        func = f"FUN_{addr:08x}"
        inv = by_name.get(func)

    size = args.size
    if size is None:
        if inv:
            size = F.true_size(inv)
        else:
            raise SystemExit(f"Could not infer --size for {func}; pass --size")

    mode = "arm" if args.arm else ("thumb" if args.thumb else (F.mode_of(inv) if inv else "thumb"))
    is_thumb = mode != "arm"
    return func, module, addr, size, is_thumb


def build_m2c_asm(func: str, module: str, addr: int, size: int, is_thumb: bool) -> str:
    tgt = M.target_bytes(module, addr, size)
    cs = M.md_thumb if is_thumb else M.md

    mod_canon = M.MODULES[module][0]
    by_addr: dict[int, str] = {}
    for f in F.load_funcs():
        fmod = f["module"]
        if fmod in M.MODULES and (fmod == "arm9" or M.MODULES[fmod][0] == mod_canon):
            by_addr[f["addr"]] = f["name"]

    step = 2 if is_thumb else 4
    min_pool = len(tgt)
    branch_targets: set[int] = set()
    pool_refs: dict[int, str] = {}

    off = 0
    while off < min_pool:
        ins = next(cs.disasm(tgt[off:off + 4], addr + off), None)
        if not ins:
            off += step
            continue
        mn = ins.mnemonic
        op = ins.op_str
        if mn.startswith("ldr") and "[pc" in op:
            m = re.search(r"\[pc,\s*#(-?(?:0x[0-9a-fA-F]+|\d+))\]", op)
            if m:
                imm = int(m.group(1), 0)
                pc_base = ((addr + off + 4) & ~3) if is_thumb else (addr + off + 8)
                poff = (pc_base + imm) - addr
                if 0 <= poff < len(tgt) and (poff % 4 == 0):
                    if poff < min_pool:
                        min_pool = poff
                    pool_refs[poff] = f".L_pool_{poff:04x}"
        elif mn.startswith("b") and mn not in ("bic", "bics", "bkpt") and not mn.startswith("bx") and "#0x" in op:
            btgt = int(op.rsplit("#", 1)[-1], 16)
            is_call = mn in ("bl", "blx") or (mn.startswith("bl") and mn[2:] in (
                "eq", "ne", "cs", "hs", "cc", "lo", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt", "le", "al"
            ))
            if not is_call and addr <= btgt < addr + min_pool:
                branch_targets.add(btgt - addr)
        off += ins.size

    lines = [
        ".syntax unified",
        ".text",
        ".code 16" if is_thumb else ".code 32",
        f".globl {func}",
        f".type {func}, function",
    ]
    if is_thumb:
        lines.append(".thumb_func")
    lines.append(f"{func}:")

    off = 0
    while off < min_pool:
        if off in branch_targets:
            lines.append(f".L_{off:04x}:")
        ins = next(cs.disasm(tgt[off:off + 4], addr + off), None)
        if not ins:
            off += step
            continue
        mn = ins.mnemonic.replace(".n", "").replace(".w", "")
        op = ins.op_str
        if mn.startswith("ldr") and "[pc" in op:
            m = re.search(r"\[pc,\s*#(-?(?:0x[0-9a-fA-F]+|\d+))\]", op)
            if m:
                imm = int(m.group(1), 0)
                pc_base = ((addr + off + 4) & ~3) if is_thumb else (addr + off + 8)
                poff = (pc_base + imm) - addr
                if poff in pool_refs:
                    reg = op.split(",")[0].strip()
                    lines.append(f"    {mn} {reg}, {pool_refs[poff]}")
                    off += ins.size
                    continue
        if mn in ("bl", "blx") and "#0x" in op:
            call_tgt = int(op.rsplit("#", 1)[-1], 16) & ~1
            sym_name = by_addr.get(call_tgt, f"FUN_{call_tgt:08x}")
            lines.append(f"    bl {sym_name}")
            off += ins.size
            continue
        if mn.startswith("b") and mn not in ("bic", "bics", "bkpt") and not mn.startswith("bx") and "#0x" in op:
            btgt = int(op.rsplit("#", 1)[-1], 16)
            boff = btgt - addr
            if boff in branch_targets:
                lines.append(f"    {mn} .L_{boff:04x}")
                off += ins.size
                continue
            else:
                call_tgt = btgt & ~1
                sym_name = by_addr.get(call_tgt, f"FUN_{call_tgt:08x}")
                lines.append(f"    {mn} {sym_name}")
                off += ins.size
                continue
        lines.append(f"    {mn} {op}")
        off += ins.size

    if off < len(tgt):
        lines.append("    .align 2, 0")
        while off + 4 <= len(tgt):
            if off in pool_refs:
                lines.append(f"{pool_refs[off]}:")
            w = struct.unpack_from("<I", tgt, off)[0]
            lines.append(f"    .word 0x{w:08x}")
            off += 4

    return "\n".join(lines) + "\n"


def main() -> int:
    ap = argparse.ArgumentParser(description="Decompile a PSZ function with m2c.")
    ap.add_argument("--func", default=None, help="Function name (e.g. FUN_02071188)")
    ap.add_argument("--addr", default=None, type=lambda x: int(x, 0), help="Address")
    ap.add_argument("--size", default=None, type=lambda x: int(x, 0), help="Byte size")
    ap.add_argument("--module", default=None, help="Module (arm9, ov000..ov031)")
    ap.add_argument("--arm", action="store_true", help="Force ARM mode")
    ap.add_argument("--thumb", action="store_true", help="Force Thumb mode")
    ap.add_argument("--dump-asm", action="store_true", help="Also print the generated m2c assembly")
    ap.add_argument("--context", default=None, help="Optional C context file for m2c")
    args, extra = ap.parse_known_args()

    func, module, addr, size, is_thumb = resolve_target(args)
    asm_text = build_m2c_asm(func, module, addr, size, is_thumb)
    if args.dump_asm:
        print("/* === Generated Assembly for m2c === */")
        print(asm_text)

    target_triple = "gba-mwcc-c" if is_thumb else "arm-mwcc-c"
    with tempfile.NamedTemporaryFile("w", suffix=".s", delete=False, encoding="utf-8") as tf:
        tf.write(asm_text)
        asm_path = pathlib.Path(tf.name)

    try:
        cmd = [sys.executable, str(M2C_PY), "--target", target_triple, "-f", func]
        if args.context:
            cmd.extend(["--context", args.context])
        cmd.extend(extra)
        cmd.append(str(asm_path))
        r = subprocess.run(cmd, capture_output=True, text=True)
        if r.stdout:
            print(r.stdout.rstrip())
        if r.stderr:
            print(r.stderr.rstrip(), file=sys.stderr)
        return r.returncode
    finally:
        asm_path.unlink(missing_ok=True)


if __name__ == "__main__":
    sys.exit(main())
