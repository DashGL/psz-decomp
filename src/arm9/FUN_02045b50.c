// FUN_02045b50 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02045b50 @ 0x02045b50
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char DAT_02108fdc[];
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/02045b50.txt.
 */
extern int FUN_02078188(int);
unsigned int FUN_02045b50(int id,int field,int index) { unsigned int result=0; if(FUN_02078188(id) && index>=0 && index<=1) result=*(unsigned int *)(DAT_02108fdc+56*id+8*field+4*index); return result; }
