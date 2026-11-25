// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_7__0211fd84 @ 0x0211fd84 (code 0x14, pool extent 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register raw exit callback address.
 * Field identities remain provisional.
 */
extern char G_0211EE95[]; extern char G_0211FECC[]; extern char G_0211FED8[];
extern void *FUN_overlay_7__0211ee58(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_7__0211fd84(void) {FUN_overlay_7__0211ee58((void *)G_0211FED8);FUN_0200c594((void *)G_0211FED8,(void *)G_0211EE95,(void *)G_0211FECC);}
