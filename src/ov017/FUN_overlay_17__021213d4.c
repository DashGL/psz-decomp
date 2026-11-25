// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// FUN_overlay_17__021213d4 @ 0x021213d4 (code 0x5c, full extent 0x64, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch415.md.
 */
extern char G_021251F8[];
extern int FUN_overlay_17__0211e6a8(int,int,int,int,int,int);extern int *FUN_overlay_17__0211e7a8(int);extern void FUN_overlay_17__0211e928(void *,int,int);extern int FUN_overlay_17__02121264(int);extern void FUN_overlay_17__0211e984(void *,int,int,int,int);
void FUN_overlay_17__021213d4(int *self,int mode) { if(self[0]==-1){int *resource;self[0]=FUN_overlay_17__0211e6a8(0x56000,0x6c00,((int *)G_021251F8)[4],((int *)G_021251F8)[5],((int *)G_021251F8)[1],0);resource=FUN_overlay_17__0211e7a8(self[0]);if(resource){FUN_overlay_17__0211e928(resource,0,0);resource[0x2ba8/4]=200;FUN_overlay_17__0211e984(resource,0,0,FUN_overlay_17__02121264(mode),0);}} }
