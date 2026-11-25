// FUN_overlay_12__021341fc @ 0x021341fc (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021341fc @ 0x021341fc (code 0x12, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return optional object word +4, or invalid sentinel.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__021341fc(void) { unsigned int *object=*(unsigned int **)0x0213f2f8; if(object) return object[1]; return ~0u; }
