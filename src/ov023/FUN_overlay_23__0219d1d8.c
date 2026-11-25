// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_overlay_23__0219d1d8 @ 0x0219d1d8 (code 0x34, pool extent 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize fixed-point constants, copied value and difference.
 * Field identities remain provisional.
 */
extern char G_0219D9C4[]; extern char G_0219D9C8[]; extern char G_0219D9CC[]; extern char G_0219D9D0[]; extern char G_0219D9D4[];
extern void FUN_02042960(int *,int);
extern void FUN_overlay_23__0219b400(int *,const int *);
extern void FUN_overlay_23__0219b3e0(int *,const int *,const int *);
void FUN_overlay_23__0219d1d8(void) {FUN_02042960((int *)G_0219D9D4,102400);FUN_02042960((int *)G_0219D9D0,163840);FUN_overlay_23__0219b400((int *)G_0219D9CC,(int *)G_0219D9D4);FUN_overlay_23__0219b3e0((int *)G_0219D9C8,(int *)G_0219D9D0,(int *)G_0219D9D4);FUN_02042960((int *)G_0219D9C4,8192);}
