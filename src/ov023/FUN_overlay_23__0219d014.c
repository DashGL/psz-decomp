// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_23__0219d014 @ 0x0219d014
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219d6ac[];
extern int D_0219d6a8[];
extern int D_0219d6a4[];
extern int D_0219d6a0[];
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two shared fixed-point constants and their squares.
 * Field identities remain provisional.
 */
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_23__0219d014(void) {FUN_02042960(D_0219d6ac,32768);FUN_020bc5cc(D_0219d6a8,D_0219d6ac,D_0219d6ac);FUN_02042960(D_0219d6a4,12288);FUN_020bc5cc(D_0219d6a0,D_0219d6a4,D_0219d6a4);}
