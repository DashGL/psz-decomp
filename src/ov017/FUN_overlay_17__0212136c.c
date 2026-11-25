// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_overlay_17__0212136c @ 0x0212136c
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_021251f8[];
/* USA ROM reconstruction, 2026-11-05. UI resource construction/state
 * setup with two real stack arguments and original handle sentinels.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch397.md.
 */
extern int FUN_overlay_17__0211e6a8(int,int,int,int,int,int);
extern int *FUN_overlay_17__0211e7a8(int);
extern void FUN_overlay_17__0211e928(void *,int,int);
extern void FUN_overlay_17__0211e8dc(void *,int);
void FUN_overlay_17__0212136c(int *self) { int *object;if(self[2]==-1 && self[3]==-1){self[3]=FUN_overlay_17__0211e6a8(0x54000,0x6800,D_021251f8[9],D_021251f8[0],D_021251f8[11],0);object=FUN_overlay_17__0211e7a8(self[3]);if(object){FUN_overlay_17__0211e928(object,0,1);object[0x2ba8/4]=152;}} }
