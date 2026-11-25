// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_overlay_27__0219c0a8 @ 0x0219c0a8
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219c534[];
extern int D_0219c530[];
extern int D_0219c52c[];
extern int D_0219c528[];
extern int D_0219c524[];
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize fixed-point tuning constants and squared distance threshold.
 * Field identities remain provisional.
 */
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_27__0219c0a8(void) {FUN_02042960(D_0219c534,410);FUN_02042960(D_0219c530,8192);FUN_020bc5cc(D_0219c52c,D_0219c530,D_0219c530);FUN_02042960(D_0219c528,20480);FUN_02042960(D_0219c524,61440);}
