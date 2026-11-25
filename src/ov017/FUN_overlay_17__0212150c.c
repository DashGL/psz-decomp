// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_17__0212150c @ 0x0212150c (code 0x52, full extent 0x58, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. UI resource construction/state
 * setup with two real stack arguments and original handle sentinels.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch397.md.
 */
extern int D_02125360[];
extern int FUN_overlay_17__0211e6a8(int,int,int,int,int,int);
extern int *FUN_overlay_17__0211e7a8(int);
extern void FUN_overlay_17__0211e928(void *,int,int);
extern void FUN_overlay_17__0211e8dc(void *,int);
void FUN_overlay_17__0212150c(int *self,int state) { int *object;if(self[0]==-1)self[0]=FUN_overlay_17__0211e6a8(0x40000,0x7000,D_02125360[0],D_02125360[2],D_02125360[1],0);object=FUN_overlay_17__0211e7a8(self[0]);if(object){FUN_overlay_17__0211e8dc(object,state);FUN_overlay_17__0211e928(object,0,1);}self[1]=0;self[2]=state; }
