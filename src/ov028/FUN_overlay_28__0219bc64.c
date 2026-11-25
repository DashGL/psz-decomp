// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_28__0219bc64 @ 0x0219bc64
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219c0ac[];
extern int D_0219c0b8[];
extern int D_0219c0b4[];
extern int D_0219c0b0[];
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two shared fixed-point constants and their rounded squares.
 * Field identities remain provisional.
 */
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_28__0219bc64(void) {FUN_02042960(D_0219c0ac,28672);FUN_020bc5cc(D_0219c0b8,D_0219c0ac,D_0219c0ac);FUN_02042960(D_0219c0b4,20480);FUN_020bc5cc(D_0219c0b0,D_0219c0b4,D_0219c0b4);}
