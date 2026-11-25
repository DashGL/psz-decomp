// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_overlay_20__0219f758 @ 0x0219f758
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219febc[];
extern int D_0219feb8[];
extern int D_0219feb4[];
extern int D_0219fec0[];
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize fixed-point constants, absolute ratio and large timing constant.
 * Field identities remain provisional.
 */
extern void FUN_02042960(int *,int);
extern void FUN_020bc658(int *,const int *);
extern void FUN_020bc610(int *,const int *,const int *);
void FUN_overlay_20__0219f758(void) {int magnitude;FUN_02042960(D_0219febc,61440);FUN_02042960(D_0219feb8,-1638);FUN_020bc658(&magnitude,D_0219feb8);FUN_020bc610(D_0219feb4,&magnitude,D_0219febc);FUN_02042960(D_0219fec0,1228800);}
