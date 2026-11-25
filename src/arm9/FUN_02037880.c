// FUN_02037880 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02037880 @ 0x02037880 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Move pending child into active slot, install backreferences, then invoke child dispatch slot zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/02037880.txt.
 */
void FUN_02037880(void **self) { void *child; void (**table)(void *); self[2]=self[3]; self[3]=0; ((void **)self[2])[1]=self[1]; ((void **)self[2])[2]=self; child=self[2]; table=*(void (***)(void *))child; table[0](child); }
