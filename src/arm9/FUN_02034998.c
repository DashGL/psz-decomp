// FUN_02034998 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02034998 @ 0x02034998 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Forward receiver and second argument through dispatch slot +10.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02034998.txt.
 */
unsigned int FUN_02034998(void *self,unsigned int arg) { unsigned int (**table)(void *,unsigned int)=*(unsigned int (***)(void *,unsigned int))self; return table[4](self,arg); }
