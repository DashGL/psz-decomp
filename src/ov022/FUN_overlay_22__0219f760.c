// FUN_overlay_22__0219f760 @ 0x0219f760 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f760 @ 0x0219f760 (code 0x20, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch, unregister stored handle if registry exists, then free receiver.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219f65c(void *,unsigned int),FUN_020ba8ac(void *);
void *FUN_overlay_22__0219f760(unsigned int *p) { void *registry; p[0]=0x021a1698; registry=*(void **)0x021a1798; if(registry)FUN_overlay_22__0219f65c(registry,p[5]); FUN_020ba8ac(p); return p; }
