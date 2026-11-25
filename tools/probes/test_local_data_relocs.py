"""Exercise anonymous constant relocation checks with real pinned objects."""
from pathlib import Path
import sys
import io
import struct
import unittest
from unittest import mock

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools"))
import linkcheck as L


class LocalDataRelocationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        path = ROOT / "src/arm9/FUN_020a0768.c"
        source = path.read_text()
        cls.obj = L.M.compile_c(path, L.M.version_marker(source),
                               L.M.apply_flags_marker(L.M.DEFAULT_FLAGS, source))
        if cls.obj is None:
            raise RuntimeError("Could not compile the pinned constant-data fixture")

    def test_duplicate_local_symbol_names_are_not_guessed(self):
        elf = L.ELFFile(io.BytesIO(self.obj))
        table = elf.get_section_by_name(".symtab")
        constants = [(i, sym) for i, sym in enumerate(table.iter_symbols())
                     if sym.name.startswith("@")]
        self.assertGreaterEqual(len(constants), 2)
        _, first = constants[0]
        second_index, _ = constants[1]
        self.assertIsNotNone(L.local_data_payload(self.obj, first.name, 0))
        ambiguous = bytearray(self.obj)
        struct.pack_into("<I", ambiguous,
                         table["sh_offset"] + second_index * table["sh_entsize"],
                         first["st_name"])
        self.assertIsNone(L.local_data_payload(bytes(ambiguous), first.name, 0))

    def test_implicit_addend_objects_are_left_unverified(self):
        elf = L.ELFFile(io.BytesIO(self.obj))
        name = next(sym.name for sym in elf.get_section_by_name(".symtab").iter_symbols()
                    if sym.name.startswith("@"))
        implicit = bytearray(self.obj)
        for index, section in enumerate(elf.iter_sections()):
            if section["sh_type"] != "SHT_RELA":
                continue
            entries = list(section.iter_relocations())
            payload = b"".join(struct.pack("<II", rel["r_offset"], rel["r_info"])
                               for rel in entries)
            start = section["sh_offset"]
            implicit[start:start + len(payload)] = payload
            header = elf["e_shoff"] + index * elf["e_shentsize"]
            struct.pack_into("<I", implicit, header + 4, 9)  # SHT_REL
            struct.pack_into("<I", implicit, header + 20, len(payload))
            struct.pack_into("<I", implicit, header + 36, 8)
        self.assertIsNone(L.local_data_payload(bytes(implicit), name, 0))

    def test_existing_anonymous_constants_are_checked(self):
        for address in ("020580d0", "020a0768", "020c66d8", "020d2110", "020de1bc"):
            with self.subTest(address=address):
                rows, verdict = L.link_file(ROOT / "src/arm9" / f"FUN_{address}.c")
                self.assertEqual(verdict, "VERIFIED")
                local = [row for row in rows if "local data" in row[1]]
                self.assertTrue(local)
                self.assertTrue(all(kind == "VERIFIED" for kind, _ in local), local)

    def test_swapped_constant_payload_is_rejected(self):
        original = L.M.target_bytes

        def swapped(module, address, size):
            if module == "arm9" and address == 0x020f4bb4 and size == 12:
                return original(module, 0x020f4bc0, size)
            return original(module, address, size)

        with mock.patch.object(L.M, "target_bytes", side_effect=swapped):
            rows, verdict = L.link_file(ROOT / "src/arm9/FUN_020a0768.c")
        self.assertEqual(verdict, "WRONG")
        self.assertTrue(any(kind == "WRONG" and "local data differs" in detail
                            for kind, detail in rows), rows)


if __name__ == "__main__":
    unittest.main()
