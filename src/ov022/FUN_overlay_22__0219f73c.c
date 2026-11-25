// FUN_overlay_22__0219f73c @ 0x0219f73c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f73c @ 0x0219f73c (code 0x1a, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch and conditionally unregister stored handle.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219f65c(void *,unsigned int);
void *FUN_overlay_22__0219f73c(unsigned int *p) { void *registry; p[0]=0x021a1698; registry=*(void **)0x021a1798; if(registry)FUN_overlay_22__0219f65c(registry,p[5]); return p; }
