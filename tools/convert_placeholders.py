"""Eliminate placeholder `G` / `G2` symbols from banked template files
(whole-project link prep, stage 1).

Tries `#define G ((TYPE *)0xBASE)` first (turning the pool word into literal
data); if that changes codegen (e.g., indexed `G[k]` where mwccarm folds a
literal base + offset into the pool word), falls back to
`extern TYPE G_<BASE>[]; #define G G_<BASE>` so codegen stays identical AND
every relocation symbol carries its exact 8-hex-digit target address for
verify_relocs / linkcheck.py.

Usage:  python tools/convert_placeholders.py [--apply] [--drop-unconvertible]
"""
import argparse
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import match as M  # noqa: E402

G_EXTERN_RE = re.compile(r"^extern\s+(?P<type>[\w ]+?)\s*(?P<ptr>\*)?\s*(?P<sym>G2?)(?P<arr>\[\])?;\s*$", re.M)


def module_of_path(path: pathlib.Path) -> str:
    parent = path.parent.name
    if parent.startswith("ov"):
        return parent
    return "arm9"


def base_addrs_for(f: pathlib.Path, name: str, addr: int, module: str):
    text = f.read_text(encoding="utf-8")
    flags = M.apply_flags_marker(M.DEFAULT_FLAGS, text)
    obj = M.compile_c(f, M.CANONICAL, flags)
    if obj is None:
        return None, "compile failed"
    code, relocs, reloc_info = M.extract_func(obj, name)
    if code is None:
        return None, "symbol not found"
    tgt = M.target_bytes(module, addr, len(code))
    out = {}
    for sym_name in ("G", "G2"):
        slots = [r["offset"] for r in reloc_info if r["sym"] == sym_name]
        if not slots:
            continue
        finals = set()
        for off in slots:
            if off + 4 > len(code):
                return None, f"{sym_name} reloc at +0x{off:x} outside code span"
            finals.add(int.from_bytes(tgt[off:off + 4], "little"))
        if len(finals) != 1:
            return None, f"{len(finals)} distinct base values in ROM pool for {sym_name}"
        out[sym_name] = finals.pop()
    if not out:
        return None, "no G/G2 reloc"
    return out, None


def replace_placeholders(text: str, bases: dict[str, int], use_extern: bool) -> str:
    def sub(m):
        typ = m.group("type").strip()
        ptr = m.group("ptr") or ""
        sym = m.group("sym")
        arr = m.group("arr") or ""
        if sym not in bases:
            return m.group(0)
        base = bases[sym]
        if not use_extern:
            if ptr == "*":
                return f"#define {sym} (*({typ} **)0x{base:08X})"
            if not arr:
                return f"#define {sym} (*({typ} *)0x{base:08X})"
            return f"#define {sym} (({typ} *)0x{base:08X})"
        return f"extern {typ} {ptr}{sym}_{base:08X}{arr};\n#define {sym} {sym}_{base:08X}"

    return G_EXTERN_RE.sub(sub, text)


def verify_written(f: pathlib.Path, name: str, addr: int, module: str) -> tuple[bool, int]:
    t2 = f.read_text(encoding="utf-8")
    flags = M.apply_flags_marker(M.DEFAULT_FLAGS, t2)
    obj = M.compile_c(f, M.CANONICAL, flags)
    if obj is None:
        return False, 999
    code, relocs, reloc_info = M.extract_func(obj, name)
    if code is None:
        return False, 999
    tgt = M.target_bytes(module, addr, len(code))
    ok, ndiff = M.compare(tgt, code, relocs, verbose=False)
    checks = M.verify_relocs(addr, tgt, reloc_info, "-thumb" in flags)
    bad = [r for r in checks if r[4] is not True]
    blind = len(reloc_info) - len(checks)
    return (ok and ndiff == 0 and not bad and blind == 0), ndiff


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--drop-unconvertible", action="store_true")
    a = ap.parse_args()

    files = sorted((REPO / "src" / "arm9").glob("*.c")) + sorted((REPO / "src").glob("ov*/*.c"))
    touched = 0
    fails = []
    for f in files:
        orig_text = f.read_text(encoding="utf-8")
        if not G_EXTERN_RE.search(orig_text):
            continue
        name = f.stem
        module = module_of_path(f)
        m = re.search(r"@ 0x([0-9a-fA-F]{8})", orig_text)
        if not m:
            fails.append((f, name, "no @0xADDR in header"))
            continue
        addr = int(m.group(1), 16)
        bases, why = base_addrs_for(f, name, addr, module)
        if bases is None:
            fails.append((f, name, why))
            continue
        if not a.apply:
            print(f"{name}: { {k: hex(v) for k, v in bases.items()} }")
            continue

        # Try literal #define first; fall back to extern G_<BASE>[] if needed
        for use_extern in (False, True):
            new_text = replace_placeholders(orig_text, bases, use_extern=use_extern)
            f.write_text(new_text, encoding="utf-8", newline="\n")
            ok, ndiff = verify_written(f, name, addr, module)
            if ok:
                touched += 1
                mode_tag = "extern-sym" if use_extern else "literal"
                print(f"  converted {name} ({mode_tag})")
                break
        else:
            f.write_text(orig_text, encoding="utf-8", newline="\n")
            fails.append((f, name, f"post-write mismatch (ndiff={ndiff})"))

    print(f"\n{touched} file(s) converted + re-verified")
    if fails:
        print(f"UNCONVERTIBLE ({len(fails)}):")
        for fp, n, w in fails:
            print(f"  {n}: {w}")
            if a.apply and a.drop_unconvertible:
                fp.unlink(missing_ok=True)
                print(f"    -> removed {fp.relative_to(REPO)}")
        return 0 if (a.apply and a.drop_unconvertible) else 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
