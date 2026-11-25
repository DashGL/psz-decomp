// FUN_0205c6d8 @ 0x0205c6d8 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_0205c6d8 @ 0x0205c6d8 (inventory code 0x24, arm)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 156.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b156/0205c6d8.txt.
 */
void FUN_0205c6d8(unsigned int numerator,unsigned int denominator){*(volatile unsigned short *)0x04000280=1;*(volatile unsigned int *)0x04000290=0;*(volatile unsigned int *)0x04000294=numerator;*(volatile unsigned int *)0x04000298=denominator;*(volatile unsigned int *)0x0400029c=0;}
