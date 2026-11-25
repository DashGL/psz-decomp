// FUN_0204fa5c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0204fa5c @ 0x0204fa5c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Destroy optional receiver via dispatch slot +4, preserving target double-null guard shape.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/0204fa5c.txt.
 */
void FUN_0204fa5c(void *self) { if(self) { if(self) { void (**table)(void *)=*(void (***)(void *))self; table[1](self); } } }
