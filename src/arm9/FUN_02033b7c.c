// FUN_02033b7c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02033b7c @ 0x02033b7c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Invoke dispatch slot +c on optional child +4.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02033b7c.txt.
 */
void FUN_02033b7c(void **self) { void *child=self[1]; if(child) { void (**table)(void *)=*(void (***)(void *))child; table[3](child); } }
