// FUN_overlay_12__02120a34 @ 0x02120a34 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120a34 @ 0x02120a34 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and initialize thirty-six-byte child, storing null on allocation failure.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_12__021375b8(void *);
void FUN_overlay_12__02120a34(void **self) { void *child=FUN_020ba894(36); if(child) child=FUN_overlay_12__021375b8(child); self[1]=child; }
