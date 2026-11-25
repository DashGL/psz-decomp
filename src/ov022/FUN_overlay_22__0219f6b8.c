// FUN_overlay_22__0219f6b8 @ 0x0219f6b8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f6b8 @ 0x0219f6b8 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Clear count and twenty slots.
 * Field identities remain provisional.
 */
void *FUN_overlay_22__0219f6b8(unsigned int *p) { int i; p[20]=0; for(i=0;i<20;i++) p[i]=0; return p; }
