"""End-to-end link assurance: compile the matched C (mwccarm, pinned dsi/1.1),
swap the compiled function bytes into the per-file link objects that
tools/build_all.py normally fills from dsd delink (ROM-carved bytes), relink
the whole ARM9 with mwldarm, and byte-compare against extracted/arm9/arm9.bin.

Run from repo root: python tools/probes/verify_c_link.py [--limit N] [--all]
Exits 0 only if the relinked arm9 is byte-identical to the ROM.
"""
import argparse
import os
import pathlib
import re
import shutil
import struct
import subprocess
import sys
import tempfile
from typing import Callable

REPO = pathlib.Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools"))

ARM9 = REPO / "assets" / "extracted" / "arm9" / "arm9.bin"


def load_symbols() -> dict[str, tuple[int, int]]:
    syms = {}
    pat = re.compile(r"name=(\S+) module=(\S+) addr=0x([0-9a-fA-F]+) "
                     r"size=0x([0-9a-fA-F]+)")
    for line in (REPO / "config" / "arm9" / "symbols.txt").read_text(encoding="utf-8").splitlines():
        m = pat.match(line.strip())
        if m and m.group(2) in ("main", "arm9"):
            syms[m.group(1)] = (int(m.group(3), 16), int(m.group(4), 16))
    return syms


def set_text_and_align(path: pathlib.Path, payload: bytes,
                       reloc_slots: set[int]) -> tuple[bool, str]:
    data = bytearray(path.read_bytes())
    if bytes(data[:4]) != b"\x7fELF":
        return False, "not ELF"
    e_shoff = struct.unpack_from("<I", data, 0x20)[0]
    e_shentsize = struct.unpack_from("<H", data, 0x2E)[0]
    e_shnum = struct.unpack_from("<H", data, 0x30)[0]
    secs = [struct.unpack_from("<10I", data, e_shoff + k * e_shentsize)
            for k in range(e_shnum)]
    strtabs = [f for f in secs if f[1] == 3]
    if not strtabs:
        return False, "no strtab"
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
        return False, "no .text section"
    f = secs[text_idx]
    off, size = f[4], f[5]
    if size != len(payload):
        return False, (f"obj .text span {size} != compiled {len(payload)} "
                       "- gen_dsd_project.py size-regex defect")
    old = data[off:off + size]
    new = bytearray(payload)
    kept = 0
    for slot in sorted(reloc_slots):
        if slot + 4 <= size:
            new[slot:slot + 4] = old[slot:slot + 4]
            kept += 1
    data[off:off + size] = new
    struct.pack_into("<I", data, e_shoff + text_idx * e_shentsize + 0x20, 2)
    path.write_bytes(bytes(data))
    return True, f"ok ({kept} reloc slot(s) restored from ROM)"


def bisect_culprits(
    items: list[str],
    test_fn: Callable[[list[str]], bool],
    *,
    max_culprits: int = 8,
    log: Callable[[str], None] = print,
) -> tuple[list[str], bool]:
    """Locate minimal link-breaking object(s) in O(k log N) link probes.

    `test_fn(subset)` returns True iff linking with ONLY `subset` swapped in
    reproduces the ROM byte-for-byte.

    Returns `(culprits, baseline_ok)`. If `baseline_ok` is False, even the
    empty swap (pure ROM-carved delinked baseline) failed to link identically.
    """
    if not test_fn([]):
        log("[bisect] baseline (0 swapped objects) FAILED — delinked project itself is broken")
        return [], False

    remaining = list(items)
    culprits: list[str] = []
    step = 0

    def _probe(subset: list[str]) -> bool:
        nonlocal step
        step += 1
        ok = test_fn(subset)
        log(f"[bisect step {step}] {len(subset)}/{len(items)} swapped -> {'PASS' if ok else 'FAIL'}")
        return ok

    while remaining and len(culprits) < max_culprits:
        if culprits and _probe(remaining):
            break
        sub = list(remaining)
        context: list[str] = []
        while len(sub) > 1:
            mid = len(sub) // 2
            left, right = sub[:mid], sub[mid:]
            if not _probe(context + left):
                sub = left
            else:
                context = context + left
                sub = right
        culprit = sub[0]
        culprits.append(culprit)
        log(f"[bisect] isolated culprit #{len(culprits)}: {culprit}")
        remaining = [x for x in remaining if x != culprit]

    return culprits, True


def _run_link(
    launch: list[str],
    mwldarm: pathlib.Path,
    ws: pathlib.Path,
    wb: pathlib.Path,
    env: dict[str, str],
    rom: bytes,
) -> tuple[bool, int, str]:
    """Run mwldarm in `ws` and compare `wb/build/arm9.o` against `rom`."""
    rc = subprocess.run(
        [*launch, str(mwldarm),
         "-proc", "arm946e", "-nostdlib", "-interworking",
         "-msgstyle", "gcc", "-main", "", "-o",
         str(wb / "arm9_linked.o"),
         f"@{wb / 'objects.txt'}", str(wb / "arm9.lcf")],
        capture_output=True, text=True, env=env, cwd=str(ws))
    if rc.returncode != 0:
        return False, -1, (rc.stdout + rc.stderr)[-2000:]
    linked = (wb / "build" / "arm9.o").read_bytes()
    if linked == rom:
        return True, 0, ""
    n = min(len(linked), len(rom))
    diff = sum(1 for a, b in zip(linked[:n], rom[:n]) if a != b) + abs(len(linked) - len(rom))
    return False, diff, ""


def main() -> int:
    import match as M
    from gen_dsd_project import parse_header_span

    ap = argparse.ArgumentParser()
    ap.add_argument("--limit", type=int, default=8,
                    help="how many matched functions to swap in (default 8)")
    ap.add_argument("--all", action="store_true",
                    help="swap in every matched function")
    ap.add_argument("--bisect", action="store_true",
                    help="if the relinked arm9 fails or differs from ROM, binary-search "
                         "only the link step (no recompiles) to pinpoint the offending object(s)")
    ap.add_argument("--max-culprits", type=int, default=8,
                    help="maximum culprits to isolate in --bisect mode (default 8)")
    args = ap.parse_args()

    if os.name != "nt":
        launch = os.environ.get("MWLDARM_LAUNCHER", "").split() or ["wine"]
    else:
        launch = []

    syms = load_symbols()
    srcs = sorted((REPO / "src" / "arm9").glob("FUN_[0-9a-f]*.c"))
    if not args.all:
        srcs = srcs[:args.limit]

    print(f"compiling + swapping {len(srcs)} function objects "
          f"({'ALL' if args.all else 'sample'}) ...")
    ws = pathlib.Path(tempfile.mkdtemp(prefix="c_link_"))
    proj = ws / "dsdproj"
    shutil.copytree(REPO / "match" / "dsdproj", proj)
    wb = ws / "build"
    shutil.copytree(REPO / "match" / "build", wb)
    env = dict(os.environ, LM_LICENSE_FILE=str(M.LICENSE))

    swapped = span_bad = problems = veneers = 0
    notes: list[str] = []
    # Track original vs swapped object bytes for --bisect without recompiling.
    obj_paths: dict[str, pathlib.Path] = {}
    orig_objs: dict[str, bytes] = {}
    new_objs: dict[str, bytes] = {}
    swapped_names: list[str] = []

    for p in srcs:
        name = p.stem
        if name not in syms:
            veneers += 1
        src_text = p.read_text(encoding="utf-8")
        if p.suffix == ".s":
            is_thumb_fn = bool(re.search(r"^\s*\.thumb\b", src_text, re.M))
            obj = M.assemble_s(p, M.version_marker(src_text))
        else:
            flags = M.apply_flags_marker(M.DEFAULT_FLAGS, src_text)
            is_thumb_fn = "-thumb" in flags
            obj = M.compile_c(p, M.version_marker(src_text), flags)
        if obj is None:
            problems += 1
            notes.append(f"{name}: compile/assemble failed")
            continue
        sym_name = M.symbol_marker(src_text, name)
        code, _, info = M.extract_func(obj, sym_name)
        if code is None:
            problems += 1
            notes.append(f"{name}: symbol {sym_name} missing")
            continue
        payload = bytearray(code)
        addr = M.body_addr("arm9", int(name[4:], 16), src_text)
        target = M.target_bytes("arm9", addr, len(payload))
        checks = M.verify_relocs(addr, target, info, is_thumb=is_thumb_fn)
        if any(row[4] is False for row in checks):
            problems += 1
            notes.append(f"{name}: wrong relocation destination")
            continue
        slots = {r["offset"] for r in info}
        for off in slots:
            if off < 0 or off + 4 > len(payload):
                raise ValueError(f"{name}: relocation out of bounds at {off}")
            payload[off:off + 4] = target[off:off + 4]
        if payload != target:
            problems += 1
            notes.append(f"{name}: non-relocation bytes differ")
            continue
        want = parse_header_span(src_text)
        if want is not None and want != len(payload):
            span_bad += 1
            notes.append(f"{name}: header span 0x{want:x} != compiled 0x{len(payload):x}")
        dst = proj / "arm9" / "src" / "arm9" / p.with_suffix(".o").name
        orig_bytes = dst.read_bytes() if args.bisect and dst.is_file() else b""
        ok, why = set_text_and_align(dst, bytes(payload), slots)
        if ok:
            swapped += 1
            swapped_names.append(name)
            if args.bisect:
                obj_paths[name] = dst
                orig_objs[name] = orig_bytes
                new_objs[name] = dst.read_bytes()
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
    (wb / "objects.txt").write_text("\n".join(lines) + "\n",
                                    encoding="utf-8")

    print(f"swapped {swapped}; stale-header warnings {span_bad}; "
          f"problems {problems}; veneer-absent-from-symbols {veneers}")
    for nline in notes[:12]:
        print(f"  ! {nline}")

    mwldarm = M.MW / "dsi" / "1.1" / "mwldarm.exe"
    rom = ARM9.read_bytes()
    same, diff, link_err = _run_link(launch, mwldarm, ws, wb, env, rom)
    if diff < 0:
        print("LINK FAILED:\n" + link_err)
    else:
        print(f"\narm9 {len(rom)} bytes: "
              + ("IDENTICAL (compiled C + gaps == ROM)" if same
                 else f"{diff} bytes differ"))

    if not same and args.bisect and swapped_names:
        print(f"\n== bisecting {len(swapped_names)} swapped object(s) (link-only) ==")
        active_set = set(swapped_names)

        def _test_subset(subset: list[str]) -> bool:
            nonlocal active_set
            want_set = set(subset)
            for nm in active_set - want_set:
                obj_paths[nm].write_bytes(orig_objs[nm])
            for nm in want_set - active_set:
                obj_paths[nm].write_bytes(new_objs[nm])
            active_set = want_set
            ok_link, _, _ = _run_link(launch, mwldarm, ws, wb, env, rom)
            return ok_link

        culprits, baseline_ok = bisect_culprits(
            swapped_names, _test_subset, max_culprits=args.max_culprits
        )
        if baseline_ok:
            print(f"\nBisect complete: {len(culprits)} culprit(s):")
            for c in culprits:
                print(f"  - src/arm9/{c}.c")

    if not same:
        print("(workspace kept at " + str(ws) + ")")
    else:
        shutil.rmtree(ws, ignore_errors=True)
    return 0 if same and problems == 0 and swapped == len(srcs) else 1


if __name__ == "__main__":
    sys.exit(main())
