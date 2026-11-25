// FUN_02045b84 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02045b84 @ 0x02045b84
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/02045b84.txt.
 */
extern char DAT_02108e74[];
extern int FUN_02078188(int); extern void FUN_02045990(void *,void *);
void FUN_02045b84(int id,void *src,int index) { if(FUN_02078188(id) && index>=0 && index<=1) FUN_02045990(DAT_02108e74+id*8+index*4,src); }
