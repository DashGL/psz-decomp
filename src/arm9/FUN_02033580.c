// FUN_02033580 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02033580 @ 0x02033580 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Resolve supplied identifier then invoke optional object dispatch slot +8.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02033580.txt.
 */
extern void *FUN_020335fc(unsigned int);
void FUN_02033580(unsigned int id) { void *object=FUN_020335fc(id); if(object) { void (**table)(void *)=*(void (***)(void *))object; table[2](object); } }
