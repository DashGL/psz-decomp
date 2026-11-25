// FUN_02034ae4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02034ae4 @ 0x02034ae4 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Return logical negation of receiver dispatch slot +14 with second argument.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02034ae4.txt.
 */
int FUN_02034ae4(void *self,unsigned int arg) { unsigned int (**table)(void *,unsigned int)=*(unsigned int (***)(void *,unsigned int))self; return !table[5](self,arg); }
