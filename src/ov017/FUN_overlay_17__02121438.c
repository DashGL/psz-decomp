// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_17__02121438 @ 0x02121438 (code 0x5c, full extent 0x64, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch415.md.
 */
extern int D_021251f8[];
extern int FUN_overlay_17__0211e6a8(int,int,int,int,int,int);extern int *FUN_overlay_17__0211e7a8(int);extern void FUN_overlay_17__0211e928(void *,int,int);extern int FUN_overlay_17__02121264(int);extern void FUN_overlay_17__0211e984(void *,int,int,int,int);
void FUN_overlay_17__02121438(int *self,int mode) { if(self[1]==-1){int *resource;self[1]=FUN_overlay_17__0211e6a8(0x56000,0x6c00,D_021251f8[6],D_021251f8[8],D_021251f8[10],0);resource=FUN_overlay_17__0211e7a8(self[1]);if(resource){FUN_overlay_17__0211e928(resource,0,0);resource[0x2ba8/4]=184;FUN_overlay_17__0211e984(resource,0,0,FUN_overlay_17__02121264(mode),0);}} }
