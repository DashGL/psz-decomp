// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_25__0219aae8 @ 0x0219aae8
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two shared fixed-point constants and their rounded squares.
 * Field identities remain provisional.
 */
extern int data_0219aedc[];
extern int data_0219aed8[];
extern int data_0219aed4[];
extern int data_0219aed0[];
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_25__0219aae8(void) {FUN_02042960(data_0219aedc,20480);FUN_020bc5cc(data_0219aed8,data_0219aedc,data_0219aedc);FUN_02042960(data_0219aed4,12288);FUN_020bc5cc(data_0219aed0,data_0219aed4,data_0219aed4);}
