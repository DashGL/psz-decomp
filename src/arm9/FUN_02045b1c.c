// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_02045b1c @ 0x02045b1c
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/02045b1c.txt.
 */
extern char DAT_02108e74[];
extern int FUN_02078188(int); extern int FUN_020458f8(void *,void *);
int FUN_02045b1c(int id,void *out,int index) { int result=0; if(FUN_02078188(id) && index>=0 && index<=1) result=FUN_020458f8(out,DAT_02108e74+8*id+4*index); return result; }
