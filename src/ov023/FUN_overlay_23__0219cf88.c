// FUN_overlay_23__0219cf88 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_23__0219cf88 @ 0x0219cf88 (code 0x2c, pool extent 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize fixed-point constants and derive shared squared value.
 * Field identities remain provisional.
 */
extern char G_0219D60C[]; extern char G_0219D610[]; extern char G_0219D614[]; extern char G_0219D618[];
extern void FUN_02042960(int *,int);
extern void FUN_020bc5cc(int *,const int *,const int *);
void FUN_overlay_23__0219cf88(void) {FUN_02042960((int *)G_0219D618,81920);FUN_02042960((int *)G_0219D614,122880);FUN_02042960((int *)G_0219D610,24576);FUN_020bc5cc((int *)G_0219D60C,(int *)G_0219D610,(int *)G_0219D610);}
