// FUN_overlay_12__02136404 @ 0x02136404 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02136404 @ 0x02136404 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return predicate on optional module global object, otherwise zero.
 * Field identities and high-level API contracts remain provisional.
 */
extern int FUN_overlay_12__0213641c(void *);
int FUN_overlay_12__02136404(void) { void *object=*(void **)0x0213f32c; if(object) return FUN_overlay_12__0213641c(object); return 0; }
