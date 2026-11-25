// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_23__0219d050 @ 0x0219d050 (code 0x2c, pool extent 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two shared fixed-point constants and their rounded squares.
 * Field identities remain provisional.
 */
extern char G_0219D714[]; extern char G_0219D718[]; extern char G_0219D71C[]; extern char G_0219D720[];
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_23__0219d050(void) {FUN_02042960((int *)G_0219D714,32768);FUN_020bc5cc((int *)G_0219D720,(int *)G_0219D714,(int *)G_0219D714);FUN_02042960((int *)G_0219D71C,12288);FUN_020bc5cc((int *)G_0219D718,(int *)G_0219D71C,(int *)G_0219D71C);}
