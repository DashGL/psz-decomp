// FUN_02033850 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02033850 @ 0x02033850 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Clear mask bits in global flags and return resulting word.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02033850.txt.
 */
extern char G_02108C6C[];
unsigned int FUN_02033850(unsigned int mask) { unsigned int value=*(unsigned int *)G_02108C6C & ~mask; *(unsigned int *)G_02108C6C=value; return value; }
