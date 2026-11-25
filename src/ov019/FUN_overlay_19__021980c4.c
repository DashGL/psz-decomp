// FUN_overlay_19__021980c4 @ 0x021980c4 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__021980c4 @ 0x021980c4 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate 156-byte object and construct it on success.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_19__0219ac38(void *);
void *FUN_overlay_19__021980c4(void) { void *object=FUN_020ba894(156); if(object) return FUN_overlay_19__0219ac38(object); return object; }
