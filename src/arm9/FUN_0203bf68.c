// FUN_0203bf68 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203bf68 @ 0x0203bf68 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Test receiver dispatch slot +d0 result against all-ones sentinel.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203bf68.txt.
 */
int FUN_0203bf68(void *self) { unsigned int (**table)(void *)=*(unsigned int (***)(void *))self; return table[52](self)!=~0u; }
