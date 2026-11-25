"""Regression checks for exact-byte promotion classification beside relocations."""
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
import near_audit as N


class NearPromotionTests(unittest.TestCase):
    def score(self, candidate, bad=False):
        with tempfile.TemporaryDirectory() as folder:
            source = Path(folder) / 'FUN_02000000.c'
            source.write_text('void FUN_02000000(void) {}\n')
            with patch.object(N.F, 'by_name', return_value={source.stem: {'addr': 0x02000000, 'size': 8}}), \
                 patch.object(N, '_compile', return_value=object()), \
                 patch.object(N, 'extract_func', return_value=(candidate, {0, 4}, [{'offset': 2}])), \
                 patch.object(N, 'target_bytes', return_value=bytes(8)), \
                 patch.object(N, 'verify_relocs', return_value=[(0, 0, 0, 0, False)] if bad else []):
                return N.score(source)

    def test_adjacent_thumb_byte_is_not_hidden_by_word_mask(self):
        candidate = bytearray(8)
        candidate[6] = 1  # Outside the relocation at2..5, inside a masked word.
        verdict, detail = self.score(bytes(candidate))
        self.assertEqual(verdict, 'DIFF')
        self.assertIn('mismatches=0/2', detail)
        self.assertIn('exact_bytes=1', detail)

    def test_verified_relocation_bytes_are_masked(self):
        self.assertEqual(self.score(b'\0\0ABCD\0\0')[0], 'PROMOTABLE')

    def test_bad_destination_prevents_promotion(self):
        self.assertEqual(self.score(bytes(8), bad=True)[0], 'DIFF')

    def test_size_difference_prevents_promotion(self):
        self.assertEqual(self.score(bytes(6))[0], 'SIZE')


if __name__ == '__main__':
    unittest.main()
