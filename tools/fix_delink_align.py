"""Post-process delinked .o files: set .text etc sh_addralign to 2.
Header shstrndx can be garbage in dsd's output; read section names by walking
the sections and trusting sec[1] = .text (delink layout is stable: NULL, text,
symtab, strtab, shstrtab)."""

import pathlib
import struct


def fix(p: pathlib.Path) -> bool:
    data = bytearray(p.read_bytes())
    if bytes(data[:4]) != b'\x7fELF':
        return False
    e_shoff = struct.unpack_from('<I', data, 0x20)[0]
    e_shentsize = struct.unpack_from('<H', data, 0x2e)[0]
    e_shnum = struct.unpack_from('<H', data, 0x30)[0]
    changed = False
    # The shstrtab section index can be garbage; find it: the SHT_STRTAB whose
    # offset is largest (last section) is shstrtab in dsd's delink layout.
    sections = []
    for k in range(e_shnum):
        o = e_shoff + k * e_shentsize
        if o + e_shentsize > len(data):
            return False
        fields = struct.unpack_from('<10I', data, o)
        sections.append(fields)
    # shstrtab = last SHT_STRTAB
    strtabs = [f for f in sections if f[1] == 3]
    if not strtabs:
        return False
    stroff, strsz = strtabs[-1][4], strtabs[-1][5]
    for f in sections:
        typ, off, size, align = f[1], f[4], f[5], f[8]
        if typ != 1 or not size:
            continue
        name_off = f[0]
        start = stroff + name_off
        if start >= stroff + strsz or start >= len(data):
            continue
        end = data.index(b'\0', start)
        nm = data[start:end].decode('ascii', 'replace')
        if nm in ('.text', '.rodata', '.data') and align > 2:
            # location of align field within this section header
            idx = sections.index(f)
            ao = e_shoff + idx * e_shentsize + 0x20
            struct.pack_into('<I', data, ao, 2)
            changed = True
    if changed:
        p.write_bytes(bytes(data))
    return changed


def main() -> int:
    count = 0
    for p in list(pathlib.Path('match/dsdproj/arm9').glob('*.o')) + \
            list(pathlib.Path('match/dsdproj/arm9/src/arm9').glob('*.o')):
        if fix(p):
            count += 1
    print('patched', count, 'objects to align 2')
    return 0


if __name__ == '__main__':
    # Relative paths are intentional: dsd delink -c writes objects under the
    # CWD, which build_all.py requires to be the repo root (see build_all.py).
    raise SystemExit(main())