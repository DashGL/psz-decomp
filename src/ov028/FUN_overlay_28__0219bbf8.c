// FUN_overlay_28__0219bbf8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_28__0219bbf8 @ 0x0219bbf8 (code 0x2c, pool extent 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two shared fixed-point constants and their rounded squares.
 * Field identities remain provisional.
 */
extern char G_0219BF40[]; extern char G_0219BF44[]; extern char G_0219BF48[]; extern char G_0219BF4C[];
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_28__0219bbf8(void) {FUN_02042960((int *)G_0219BF4C,32768);FUN_020bc5cc((int *)G_0219BF48,(int *)G_0219BF4C,(int *)G_0219BF4C);FUN_02042960((int *)G_0219BF44,20480);FUN_020bc5cc((int *)G_0219BF40,(int *)G_0219BF44,(int *)G_0219BF44);}
