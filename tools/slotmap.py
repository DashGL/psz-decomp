"""slotmap.py — ask the compiler for the frame map (sm64ds 'ask the
compiler' playbook, ported).  MWCC's DW_TAG_variable location block is a
single raw byte offset (not a DW_OP_fbreg expression!) - the block IS the
value.  Verified: variables print as bytes [80]/[84] = fpreg offsets.

  slotmap.py --c draft.c --func FUN_x     dump the frame map by name
"""
import argparse, io, pathlib, sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match as M  # noqa: E402
from elftools.elf.elffile import ELFFile


def compile_with_debug(cfile: pathlib.Path, version: str = M.CANONICAL):
    """Compile with -g appended (byte-neutral for codegen)."""
    return M.compile_c(cfile, version, M.DEFAULT_FLAGS + " -g")


def frame_map(obj_bytes: bytes):
    """{name: frame-offset} for all located variables.  pyelftools decodes
    MWCC's DW_AT_location block as a ListContainer of ints — one entry,
    the raw frame offset (MWCC's compact fbreg encoding)."""
    elf = ELFFile(io.BytesIO(obj_bytes))
    if not elf.has_dwarf_info():
        return None
    dw = elf.get_dwarf_info(relocate_dwarf_sections=False)
    out = {}
    for CU in dw.iter_CUs():
        for die in CU.iter_DIEs():
            if die.tag not in ("DW_TAG_variable", "DW_TAG_formal_parameter"):
                continue
            nm = die.attributes.get("DW_AT_name")
            loc = die.attributes.get("DW_AT_location")
            if nm is None or loc is None:
                continue
            name = nm.value.decode("utf-8", "replace") \
                if isinstance(nm.value, bytes) else nm.value
            v = loc.value
            try:
                entries = list(v)   # ListContainer
            except TypeError:
                continue
            if len(entries) == 1 and isinstance(entries[0], int):
                out[name] = entries[0]
            # multi-entry loclists or non-int forms: skip (no inline location)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--c", required=True)
    ap.add_argument("--func", required=True)
    ap.add_argument("--version", default=None)
    args = ap.parse_args()

    src = pathlib.Path(args.c)
    version = args.version or M.CANONICAL
    obj = compile_with_debug(src, version)
    if obj is None:
        print("compile failed")
        return 2
    slots = frame_map(obj)
    if slots is None:
        print("no DWARF info in object")
        return 2
    if not slots:
        print("(no located variables - everything coalesced into the pool)")
        return 0
    print("frame map (%d located vars):" % len(slots))
    for name, off in sorted(slots.items(), key=lambda kv: kv[1]):
        print("  fbreg %+4d  %s" % (off, name))
    return 0


if __name__ == "__main__":
    sys.exit(main())