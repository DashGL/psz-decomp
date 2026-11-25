"""Reject malformed address symbols instead of silently skipping their relocations."""
from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
import match as M
import linkcheck as L


class AddressSymbolTests(unittest.TestCase):
    def test_malformed_function_relocations_cannot_be_skipped(self):
        for symbol in ('FUN_02000a3a0', 'FUN_02000c938',
                       'FUN_overlay_4__021221480', 'FUN_206889c',
                       'FUN_0200a3g0', 'FUN_overlay_4__02122z48', 'FUN_'):
            with self.subTest(symbol=symbol):
                reloc = {'offset': 0, 'type': M.R_ARM_ABS32, 'sym': symbol}
                with self.assertRaisesRegex(ValueError, 'exactly eight'):
                    M.verify_relocs(0x02000000, bytes(4), [reloc], True)
                with self.assertRaisesRegex(ValueError, 'exactly eight'):
                    L.sym_addr(symbol)

    def test_valid_function_and_overlay_targets_are_still_checked(self):
        for symbol, address in (('FUN_0200a3a0', 0x0200a3a0),
                                ('FUN_overlay_4__02122148', 0x02122148)):
            with self.subTest(symbol=symbol):
                reloc = {'offset': 0, 'type': M.R_ARM_ABS32, 'sym': symbol}
                good = M.verify_relocs(0x02000000, struct.pack('<I', address | 1),
                                       [reloc], True)
                wrong = M.verify_relocs(0x02000000, bytes(4), [reloc], True)
                self.assertIs(good[0][4], True)
                self.assertIs(wrong[0][4], False)
                self.assertEqual(L.sym_addr(symbol), address)

    def test_known_helpers_cannot_exchange_targets(self):
        where = 0x02010000
        for symbol, target in (("_s32_div_f", 0x0200a3a0),
                               ("_u32_div_f", 0x0200a5ac),
                               ("_fgr", 0x02009750),
                               ("_fls", 0x020097ac),
                               ("_ll_mul", 0x0200a380),
                               ("_ull_mul", 0x0200a380)):
            other = {0x0200a3a0: 0x0200a5ac, 0x0200a5ac: 0x0200a3a0,
                     0x02009750: 0x020097ac, 0x020097ac: 0x02009750,
                     0x0200a380: 0x0200a3a0}[target]
            reloc = {"offset": 0, "type": 28, "sym": symbol}
            def arm_bl(destination):
                return struct.pack("<I", 0xeb000000 |
                                   (((destination - where - 8) >> 2) & 0xffffff))
            with self.subTest(symbol=symbol):
                self.assertEqual(L.sym_addr(symbol), target)
                good = M.verify_relocs(where, arm_bl(target), [reloc], False)
                wrong = M.verify_relocs(where, arm_bl(other), [reloc], False)
                self.assertIs(good[0][4], True)
                self.assertIs(wrong[0][4], False)

    def test_nonaddress_symbols_keep_existing_handling(self):
        for symbol in ('_unmapped_helper', '.rodata', '@12'):
            with self.subTest(symbol=symbol):
                self.assertIsNone(M.sym_target_addr(symbol))
                self.assertIsNone(L.sym_addr(symbol))


if __name__ == '__main__':
    unittest.main()
