// FUN_overlay_30__0219ab88 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_30__0219ab88 @ 0x0219ab88 (code 0x70, pool extent 0xa0, thumb)
// check: 2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize shared fixed-point tuning constants and squared thresholds.
 * Field identities remain provisional.
 */
extern char G_0219AFF0[]; extern char G_0219AFF4[]; extern char G_0219AFF8[]; extern char G_0219AFFC[]; extern char G_0219B000[]; extern char G_0219B004[]; extern char G_0219B008[]; extern char G_0219B00C[]; extern char G_0219B010[]; extern char G_0219B014[]; extern char G_0219B018[];
extern void FUN_02042960(void *,int);
extern void FUN_020bc5cc(void *,const void *,const void *);
void FUN_overlay_30__0219ab88(void) {FUN_02042960((void *)G_0219AFF0,30720);FUN_02042960((void *)G_0219B018,614400);FUN_02042960((void *)G_0219B014,368640);FUN_02042960((void *)G_0219B010,1843200);FUN_02042960((void *)G_0219B00C,184320);FUN_02042960((void *)G_0219B008,49152);FUN_02042960((void *)G_0219B004,18432);FUN_020bc5cc((void *)G_0219B000,(void *)G_0219B004,(void *)G_0219B004);FUN_02042960((void *)G_0219AFFC,30720);FUN_020bc5cc((void *)G_0219AFF8,(void *)G_0219AFFC,(void *)G_0219AFFC);FUN_02042960((void *)G_0219AFF4,921600);}
