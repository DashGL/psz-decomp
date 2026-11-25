// FUN_overlay_13__0211fa30 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_13__0211fa30 @ 0x0211fa30 (code 0x14, pool extent 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Construct static module object then register its destructor and registration node.
 * Field identities and high-level API contracts remain provisional.
 */
extern char G_0211FAC0[]; extern char G_0211FACC[];
extern void FUN_overlay_13__0211f904(void *);
extern void FUN_overlay_13__0211f92c(void *);
extern void FUN_0200c594(void *,void (*)(void *),void *);
void FUN_overlay_13__0211fa30(void) { FUN_overlay_13__0211f904((void *)G_0211FACC); FUN_0200c594((void *)G_0211FACC,FUN_overlay_13__0211f92c,(void *)G_0211FAC0); }
