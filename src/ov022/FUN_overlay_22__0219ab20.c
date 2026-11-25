// FUN_overlay_22__0219ab20 @ 0x0219ab20 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ab20 @ 0x0219ab20 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy optional owned child and clear its slot.
 * Field identities remain provisional.
 */
extern void FUN_0204adbc(void *);
void FUN_overlay_22__0219ab20(void **p) { if(p[20]) { FUN_0204adbc(p[20]); p[20]=0; } }
