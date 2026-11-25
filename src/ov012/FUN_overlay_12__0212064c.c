// FUN_overlay_12__0212064c @ 0x0212064c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212064c @ 0x0212064c (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return child predicate only when child +bc8 exists.
 * Field identities and high-level API contracts remain provisional.
 */
extern int FUN_overlay_12__021228ec(void *);
int FUN_overlay_12__0212064c(char *self) { void *child=*(void **)(self+0xbc8); if(child) return FUN_overlay_12__021228ec(child); return 0; }
