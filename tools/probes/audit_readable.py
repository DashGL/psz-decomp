"""Readable-layer audit (src-readable/): verify each human-readable file
against its byte-matched twin in src/.
"""
import pathlib
import re
import sys

HERE = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(HERE.parent))

from match import (DSD_EXTRACT, DEFAULT_FLAGS, apply_flags_marker, compile_c,
                   extract_func, version_marker, verify_relocs)

BASE = 0x02000000
ROOT = HERE.parent.parent
TWIN_DIR = ROOT / "src" / "arm9"
READ_DIR = ROOT / "src-readable" / "arm9"

ASM_TOKENS = re.compile(r"\basm\b")
MARKER_FLAGS = "// flags: "
MARKER_VERSION = "// version: "


def fail(msg):
    print(msg)
    sys.exit(1)


DECL_RE = re.compile(
    r"^\s*(?:u8|u16|u32|s8|s16|s32|int|unsigned|char|void)\s*\*?\s*"
    r"([A-Za-z_]\w*)\s*(?:;|=|\[)", re.M)
NAME_PROV_RE = re.compile(r"^(?:\s*//|\s*\*\s*)name-prov:\s*([A-Za-z_]\w*)\s*-\s*(.+)$", re.M)


def body_local_names(text):
    m = re.search(r"\bFUN_[0-9a-fA-F]+\s*\([^)]*\)\s*\{", text)
    if not m:
        return set()
    body = text[m.end():]
    depth, out = 1, []
    for ch_idx, ch in enumerate(body):
        if ch == '{':
            depth += 1
        elif ch == '}':
            depth -= 1
            if depth == 0:
                break
        elif ch == ';' and depth == 1:
            stmt = body[:ch_idx].rsplit('\n', 1)[-1].strip()
            dm = DECL_RE.match(stmt + ';')
            if dm:
                out.append(dm.group(1))
    return set(out)


def carried_names(read_text, twin_text):
    return body_local_names(read_text) & body_local_names(twin_text)


def name_prov_unacked(read_text, carried):
    prov = dict((m.group(1), m.group(2)) for m in NAME_PROV_RE.finditer(read_text))
    return sorted(n for n in carried if n not in prov)


def read_file(p):
    return p.read_text(encoding="utf-8", errors="replace")


def check_plain_c(name, text):
    if MARKER_FLAGS in text:
        return f"carries {MARKER_FLAGS.strip()!r} - flags are inherited from the twin"
    if MARKER_VERSION in text:
        return f"carries {MARKER_VERSION.strip()!r} - version is inherited from the twin"
    if ASM_TOKENS.search(text):
        return "mentions the inline-assembly keyword - readable files are plain C only"
    if "__asm" in text:
        return "carries __asm - readable files are plain C only"
    return None


def twin_state(name, twin_path, twin_text):
    flags = apply_flags_marker(DEFAULT_FLAGS, twin_text)
    version = version_marker(twin_text)
    obj = compile_c(twin_path, version, flags)
    if obj is None:
        return None, f"twin does not COMPILE under its own markers ({version})"
    code, relocs, rinfo = extract_func(obj, name)
    if code is None:
        return None, f"twin object has no symbol {name}"
    addr = int(name[len("FUN_"):], 16)
    tgt = DSD_EXTRACT.joinpath("arm9", "arm9.bin").read_bytes()[
        addr - BASE: addr - BASE + len(code)]
    thumb = "-thumb" in flags
    from match import compare
    ok, ndiff = compare(tgt, code, relocs, verbose=False)
    badrel = [x for x in verify_relocs(addr, tgt, rinfo, thumb) if x[4] is False]
    if not ok or badrel:
        why = f"twin does not VERIFY (word diff {ndiff}, {len(badrel)} bad relocs)"
        return None, why
    return (code, relocs, rinfo, flags, version), None


def main():
    readable = sorted(READ_DIR.glob("FUN_*.c")) if READ_DIR.is_dir() else []
    if not readable:
        print("no readable files under src-readable/arm9 - nothing to audit")
        return

    passed, failures, skipped = [], [], []
    for rp in readable:
        name = rp.stem
        twin_path = TWIN_DIR / rp.name
        text = read_file(rp)
        line1 = text.split("\n", 1)[0]
        m = re.match(r"// \S+ - readable\. matched: (\S+\.c)$", line1.rstrip())
        if not m:
            failures.append((name, "header line 1 must be '// FUN_<addr> - readable. matched: src/arm9/<same>.c'"))
            continue
        twin_ref = m.group(1)
        expected_ref = f"src/arm9/{rp.name}"
        if twin_ref != expected_ref:
            failures.append((name, f"// matched: points at {twin_ref}, expected {expected_ref}"))
            continue
        if not twin_path.is_file():
            skipped.append((name, f"twin {twin_ref} does not exist"))
            continue

        why = check_plain_c(name, text)
        if why:
            failures.append((name, why))
            continue

        st, err = twin_state(name, twin_path, read_file(twin_path))
        if err:
            failures.append((name, err))
            continue
        code, relocs, rinfo, flags, version = st

        robj = compile_c(rp, version, flags)
        if robj is None:
            failures.append((name, f"compile failed under twin's flags ({version})"))
            continue
        rcode, rrelocs, rrinfo = extract_func(robj, name)
        if rcode is None:
            failures.append((name, f"readable object has no symbol {name}"))
            continue

        mode = "thumb" if "-thumb" in flags else "arm"
        if rcode != code:
            failures.append((name,
                             f"code bytes differ from twin "
                             f"(readable 0x{len(rcode):x} vs twin 0x{len(code):x}, {mode})"))
            continue
        if rrelocs != relocs:
            failures.append((name,
                             f"reloc OFFSET SET differs from twin "
                             f"(readable {sorted(rrelocs)} vs twin {sorted(relocs)})"))
            continue
        if rrinfo != rinfo:
            failures.append((name, "reloc ENTRIES differ from twin (types/symbols)"))
            continue
        passed.append((name, mode, len(code), version))
        carried = carried_names(text, read_file(twin_path))
        if carried:
            unacked = name_prov_unacked(text, carried)
            print(f"  NAME-AUDIT {name}: carried {sorted(carried)}"
                  f" unacked {unacked if unacked else 'none'}")
            if unacked:
                print(f"    ! {name}: carried name(s) {unacked} lack a"
                      f" name-prov line (procedure 8 item 4)")

    for name, mode, size, version in passed:
        print(f"  OK   {name} (0x{size:x}, {mode}, {version})")
    for name, why in failures:
        print(f"  FAIL {name}: {why}")
    for name, why in skipped:
        print(f"  SKIP {name} ({why})")
    print(f"\nreadable audit: {len(passed)}/{len(readable) + len(skipped)} PASS"
          f" (+{len(skipped)} skipped)")
    if failures:
        sys.exit(1)


if __name__ == "__main__":
    main()
