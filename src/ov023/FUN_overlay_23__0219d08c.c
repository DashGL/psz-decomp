// FUN_overlay_23__0219d08c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_23__0219d08c @ 0x0219d08c (code 0x36, pool extent 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two fixed-point squared thresholds and final scalar constant.
 * Field identities remain provisional.
 */
extern char G_0219D764[]; extern char G_0219D768[]; extern char G_0219D76C[]; extern char G_0219D770[]; extern char G_0219D774[];
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_23__0219d08c(void) {FUN_02042960((int *)G_0219D774,32768);FUN_020bc5cc((int *)G_0219D770,(int *)G_0219D774,(int *)G_0219D774);FUN_02042960((int *)G_0219D76C,12288);FUN_020bc5cc((int *)G_0219D768,(int *)G_0219D76C,(int *)G_0219D76C);FUN_02042960((int *)G_0219D764,6144);}
