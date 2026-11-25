// FUN_02045948 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02045948 @ 0x02045948 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/02045948.txt.
 */
extern char DAT_02108ed8[];
extern int FUN_02078188(int);
unsigned int FUN_02045948(int id,int index) { unsigned int result=0; if(FUN_02078188(id)) result=*(unsigned int *)((char *)DAT_02108ed8+28*id+4*index); return result; }
