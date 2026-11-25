"""Permuter wrapper for Phantasy Star Zero (USA, C24E) powered by
simonlindholm/decomp-permuter (`tools/decomp-permuter`).

Given a candidate C draft (`--c`), automatically:
  1. Infers `--func`, `--addr`, `--size`, and `--module` from the filename and
     `tools/funcs.py` inventory (or accepts explicit overrides).
  2. Builds a `tools/decomp-permuter/nonmatchings/<func>/` workspace containing:
     - `base.c`: the candidate C source
     - `target.s` + `target.o`: assembled from the target ROM slice with
       Thumb/ARM mapping symbols (`$t`/`$a`), literal-pool data mapping (`$d`),
       and symbol-resolved `bl`/`blx` relocations so `arm-none-eabi-objdump -drz`
       aligns instruction-for-instruction against `mwccarm` output.
     - `compile.sh`: invokes `mwccarm.exe` via `tools/bin/wibo` (or
       `MWCCARM_LAUNCHER`) with the file's effective flags (`-O4,p`/`-O4,s`,
       `-thumb`/`-noThumb`) and compiler version (`// version:` or `2.0/sp2p3`).
     - `settings.toml`: configures `func_name`, `compiler_type = "mwcc"`, and
       `tools/bin/arm-none-eabi-objdump -drz`.
  3. Runs `tools/decomp-permuter/permuter.py` across `-j` worker threads (with an
     optional `--secs` timeout).
  4. Re-verifies every improved output directory (`output-<score>-*`) with
     `tools/match.py` (`compare` + `compare_bytes` + `verify_relocs`), writing
     any byte-exact match to `<out>/<func>_perm_winner.c` and the best candidate
     to `<out>/<func>_perm_best.c`.

Usage:
  python tools/permuter.py --c drafts/near/ov010/FUN_overlay_10__0211efd8.c -j 8 --secs 60
  python tools/permuter.py --c drafts/near/arm9/FUN_020014f4.c --debug
"""
from __future__ import annotations

import argparse
import os
import pathlib
import re
import shutil
import struct
import subprocess
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import funcs as F  # noqa: E402
import match as M  # noqa: E402

DECOMP_PERMUTER_DIR = REPO / "tools" / "decomp-permuter"
BIN_DIR = REPO / "tools" / "bin"


def infer_metadata(cfile: pathlib.Path, args: argparse.Namespace):
    src = cfile.read_text(encoding="utf-8", errors="replace")
    func = args.func
    if not func:
        m = re.match(r"(FUN_(?:overlay_\d+__)?[0-9a-fA-F]{8})", cfile.stem)
        if m:
            func = m.group(1)
        else:
            raise SystemExit(f"Could not infer --func from {cfile.name}; pass --func explicitly")

    by_name = F.by_name()
    inv = by_name.get(func)

    module = args.module
    if not module:
        if func.startswith("FUN_overlay_"):
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
        else:
            addr = int(func[-8:], 16)
        addr = M.body_addr(module, addr, src)

    size = args.size
    if size is None:
        m_chk = re.search(r"\btarget=(0x[0-9a-fA-F]+|\d+)", src[:500])
        m_sz = re.search(r"\bsize=(0x[0-9a-fA-F]+|\d+)", src[:500])
        if m_chk:
            size = int(m_chk.group(1), 0)
        elif m_sz:
            size = int(m_sz.group(1), 0)
        elif inv:
            size = F.true_size(inv)
        else:
            raise SystemExit(f"Could not infer --size for {func}; pass --size explicitly")

    return func, module, addr, size, src


def extract_extern_addr_map(src: str) -> dict[int, str]:
    """Map target address -> symbol name from extern declarations in src."""
    out: dict[int, str] = {}
    for m in re.finditer(r"\b([A-Za-z_][A-Za-z0-9_]*_([0-9a-fA-F]{8}))\b", src):
        sym, hex_addr = m.group(1), m.group(2)
        out[int(hex_addr, 16) & ~1] = sym
    return out


def build_target_object(
    func: str,
    module: str,
    addr: int,
    size: int,
    is_thumb: bool,
    src: str,
    work_dir: pathlib.Path,
) -> pathlib.Path:
    """Create target.s and assemble target.o with arm-none-eabi-as so that
    decomp-permuter's objdump parser sees identical mnemonics, pool words, and
    call relocations to mwccarm's object output."""
    tgt = M.target_bytes(module, addr, size)
    cs = M.md_thumb if is_thumb else M.md

    # Build address -> function symbol lookup for direct BL/BLX calls
    mod_canon = M.MODULES[module][0]
    by_addr: dict[int, str] = {}
    for f in F.load_funcs():
        fmod = f["module"]
        if fmod in M.MODULES and (fmod == "arm9" or M.MODULES[fmod][0] == mod_canon):
            by_addr[f["addr"]] = f["name"]
    by_addr.update(extract_extern_addr_map(src))

    # Locate the earliest literal-pool word referenced via `[pc, #imm]`
    min_pool = len(tgt)
    step = 2 if is_thumb else 4
    off = 0
    while off < min_pool:
        ins = next(cs.disasm(tgt[off:off + 4], addr + off), None)
        if ins and ins.mnemonic.startswith("ldr") and "[pc" in ins.op_str:
            m = re.search(r"\[pc,\s*#(-?(?:0x[0-9a-fA-F]+|\d+))\]", ins.op_str)
            if m:
                imm = int(m.group(1), 0)
                pc_base = ((addr + off + 4) & ~3) if is_thumb else (addr + off + 8)
                poff = (pc_base + imm) - addr
                if 0 <= poff < min_pool and (poff % 4 == 0):
                    min_pool = poff
        off += ins.size if ins else step

    asm_lines = [
        ".syntax unified",
        ".text",
        ".thumb" if is_thumb else ".arm",
        f".global {func}",
        f".type {func}, %function",
        f"{func}:",
    ]

    off = 0
    while off < min_pool:
        ins = next(cs.disasm(tgt[off:off + 4], addr + off), None)
        if ins and ins.mnemonic in ("bl", "blx") and "#0x" in ins.op_str:
            call_tgt = int(ins.op_str.rsplit("#", 1)[-1], 16) & ~1
            sym_name = by_addr.get(call_tgt, f"FUN_{call_tgt:08x}")
            asm_lines.append(f"    {ins.mnemonic} {sym_name}")
            off += ins.size
        elif is_thumb:
            hw = struct.unpack_from("<H", tgt, off)[0]
            asm_lines.append(f"    .inst.n 0x{hw:04x}")
            off += 2
        else:
            w = struct.unpack_from("<I", tgt, off)[0]
            asm_lines.append(f"    .inst 0x{w:08x}")
            off += 4

    if off < len(tgt):
        asm_lines.append("$d:")
        while off + 4 <= len(tgt):
            w = struct.unpack_from("<I", tgt, off)[0]
            asm_lines.append(f"    .word 0x{w:08x}")
            off += 4
        while off < len(tgt):
            b = tgt[off]
            asm_lines.append(f"    .byte 0x{b:02x}")
            off += 1

    target_s = work_dir / "target.s"
    target_o = work_dir / "target.o"
    target_s.write_text("\n".join(asm_lines) + "\n", encoding="utf-8")

    as_bin = shutil.which("arm-none-eabi-as") or str(BIN_DIR / "arm-none-eabi-as")
    subprocess.run(
        [as_bin, "-mcpu=arm946e-s", str(target_s), "-o", str(target_o)],
        check=True,
    )
    return target_o


def setup_workspace(
    func: str,
    module: str,
    addr: int,
    size: int,
    version: str,
    flags: str,
    src: str,
) -> pathlib.Path:
    work_dir = DECOMP_PERMUTER_DIR / "nonmatchings" / func
    work_dir.mkdir(parents=True, exist_ok=True)

    # Ensure prelude/header comments stay intact while feeding base.c
    (work_dir / "base.c").write_text(src, encoding="utf-8")

    is_thumb = "-thumb" in flags
    build_target_object(func, module, addr, size, is_thumb, src, work_dir)

    launcher_list = M._default_launcher()
    launcher_str = " ".join(f'"{x}"' for x in launcher_list)
    exe = M.MW / version / "mwccarm.exe"
    inc = REPO / "include"

    compile_sh = work_dir / "compile.sh"
    compile_sh.write_text(
        f"""#!/usr/bin/env bash
set -euo pipefail
export LM_LICENSE_FILE="{M.LICENSE}"
export MWCINCLUDES="{inc}"
{launcher_str} "{exe}" {flags} -I"{inc}" -c "$1" -o "$3"
""",
        encoding="utf-8",
    )
    compile_sh.chmod(0o755)

    objdump_bin = shutil.which("arm-none-eabi-objdump") or str(BIN_DIR / "arm-none-eabi-objdump")
    settings_toml = work_dir / "settings.toml"
    settings_toml.write_text(
        f"""func_name = "{func}"
compiler_type = "mwcc"
objdump_command = "{objdump_bin} -drz"
""",
        encoding="utf-8",
    )
    return work_dir


def score_exact(
    src: str, func: str, module: str, addr: int, size: int, version: str, flags: str
):
    import tempfile

    tgt = M.target_bytes(module, addr, size)
    with tempfile.NamedTemporaryFile(
        "w", suffix=".c", delete=False, encoding="utf-8"
    ) as tf:
        tf.write(src)
        tmp = pathlib.Path(tf.name)
    try:
        obj = M.compile_c(tmp, version, flags)
        if obj is None:
            return False, 999, 999
        code, relocs, reloc_info = M.extract_func(obj, func)
        if code is None:
            return False, 999, 999
        ok, ndiff = M.compare(tgt, code, relocs, verbose=False)
        bytes_ok, _ = M.compare_bytes(tgt, code, reloc_info)
        ok = ok and bytes_ok
        bad = [
            r
            for r in M.verify_relocs(addr, tgt, reloc_info, "-thumb" in flags)
            if r[4] is False
        ]
        if bad:
            ok = False
        return ok, ndiff, len(code) - len(tgt)
    finally:
        tmp.unlink(missing_ok=True)


def main() -> int:
    ap = argparse.ArgumentParser(
        description="Run simonlindholm/decomp-permuter on a PSZ candidate C file."
    )
    ap.add_argument("--c", required=True, help="Candidate C file path")
    ap.add_argument("--func", default=None, help="Function symbol name (default: inferred)")
    ap.add_argument("--addr", default=None, type=lambda x: int(x, 0), help="Function address")
    ap.add_argument("--size", default=None, type=lambda x: int(x, 0), help="Function byte size")
    ap.add_argument("--module", default=None, help="Module name (arm9, ov000..ov031)")
    ap.add_argument("--version", default=None, help="Compiler version override")
    ap.add_argument("-j", "--threads", type=int, default=os.cpu_count() or 4, help="Worker threads")
    ap.add_argument("--secs", type=int, default=120, help="Max runtime in seconds (0 = unlimited)")
    ap.add_argument("--debug", action="store_true", help="Run decomp-permuter --debug mode (score base & show diff)")
    ap.add_argument("--stack-diffs", action="store_true", help="Penalize stack offset differences")
    ap.add_argument("--algorithm", choices=["difflib", "levenshtein"], default="difflib")
    ap.add_argument("--out", default=None, help="Directory to write _perm_winner.c / _perm_best.c")
    args, extra = ap.parse_known_args()

    cfile = pathlib.Path(args.c).resolve()
    if not cfile.is_file():
        raise SystemExit(f"Candidate file not found: {cfile}")

    func, module, addr, size, src = infer_metadata(cfile, args)
    base_flags = M.DEFAULT_FLAGS_ARM7 if module == "arm7" else M.DEFAULT_FLAGS
    flags = M.apply_flags_marker(base_flags, src)
    version = args.version or M.version_marker(src)
    out_dir = pathlib.Path(args.out) if args.out else cfile.parent
    out_dir.mkdir(parents=True, exist_ok=True)

    # Clear old output-* directories from previous runs on the same function
    work_dir = DECOMP_PERMUTER_DIR / "nonmatchings" / func
    if work_dir.is_dir():
        for old_out in work_dir.glob("output-*"):
            shutil.rmtree(old_out, ignore_errors=True)

    work_dir = setup_workspace(func, module, addr, size, version, flags, src)
    base_ok, base_ndiff, base_sdelta = score_exact(src, func, module, addr, size, version, flags)
    print(
        f"[permuter] {func} @ 0x{addr:08x} size=0x{size:x} [{module}] "
        f"ver={version} flags='{flags}'"
    )
    print(
        f"[permuter] baseline match.py: matched={base_ok} ndiff={base_ndiff} size_delta={base_sdelta}"
    )

    env = dict(os.environ)
    env["PATH"] = f"{BIN_DIR}:{env.get('PATH', '')}"

    cmd = [
        sys.executable,
        str(DECOMP_PERMUTER_DIR / "permuter.py"),
        str(work_dir.relative_to(REPO)),
        "--algorithm",
        args.algorithm,
    ]
    if args.debug:
        cmd.append("--debug")
    else:
        cmd.extend(["-j", str(args.threads), "--stop-on-zero", "--best-only"])
    if args.stack_diffs:
        cmd.append("--stack-diffs")
    cmd.extend(extra)

    timeout = None if (args.debug or args.secs <= 0) else args.secs
    try:
        subprocess.run(cmd, env=env, cwd=str(REPO), timeout=timeout)
    except subprocess.TimeoutExpired:
        print(f"\n[permuter] Reached --secs {args.secs}s timeout.")
    except KeyboardInterrupt:
        print("\n[permuter] Interrupted.")

    if args.debug:
        return 0

    # Preserve header comments (// flags:, // version:, etc.) when evaluating outputs
    header_lines = [
        ln for ln in src.splitlines() if ln.strip().startswith("//")
    ]
    header_prefix = ("\n".join(header_lines) + "\n") if header_lines else ""

    outputs = sorted(
        work_dir.glob("output-*"),
        key=lambda p: int(p.name.split("-")[1]) if p.name.split("-")[1].isdigit() else 10**9,
    )
    best_cand = (base_ndiff, abs(base_sdelta), src)
    for out_sub in outputs:
        cand_file = out_sub / "source.c"
        if not cand_file.is_file():
            continue
        cand_body = cand_file.read_text(encoding="utf-8")
        full_cand = header_prefix + cand_body
        ok, ndiff, sdelta = score_exact(full_cand, func, module, addr, size, version, flags)
        perm_score = out_sub.name.split("-")[1]
        print(
            f"[permuter] {out_sub.name}: perm_score={perm_score} -> "
            f"match.py matched={ok} ndiff={ndiff} size_delta={sdelta}"
        )
        if ok:
            winner_path = out_dir / f"{func}_perm_winner.c"
            winner_path.write_text(full_cand, encoding="utf-8")
            print(f"[permuter] *** EXACT BYTE MATCH VERIFIED: {winner_path} ***")
            return 0
        if (ndiff, abs(sdelta)) < best_cand[:2]:
            best_cand = (ndiff, abs(sdelta), full_cand)

    if best_cand[2] != src:
        best_path = out_dir / f"{func}_perm_best.c"
        best_path.write_text(best_cand[2], encoding="utf-8")
        print(f"[permuter] Wrote improved best candidate (ndiff={best_cand[0]}) to {best_path}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
