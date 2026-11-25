// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_30__0219ac80 @ 0x0219ac80
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219b0f4[];
extern int D_0219b0f0[];
extern int D_0219b0ec[];
extern int D_0219b0e8[];
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize fixed-point tuning constants and one squared threshold.
 * Field identities remain provisional.
 */
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_30__0219ac80(void) {FUN_02042960(D_0219b0f4,2048);FUN_02042960(D_0219b0f0,16384);FUN_020bc5cc(D_0219b0ec,D_0219b0f0,D_0219b0f0);FUN_02042960(D_0219b0e8,8192);}
