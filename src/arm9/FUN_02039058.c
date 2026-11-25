// FUN_02039058 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02039058 @ 0x02039058 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Destroy optional receiver via dispatch slot +4, preserving target double-null guard shape.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02039058.txt.
 */
void FUN_02039058(void *self) { if(self) { if(self) { void (**table)(void *)=*(void (***)(void *))self; table[1](self); } } }
