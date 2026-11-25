// FUN_overlay_12__0212e340 @ 0x0212e340 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212e340 @ 0x0212e340 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return word +4 when second argument is nonzero, otherwise one.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__0212e340(unsigned int *self,unsigned int flag) { if(flag) return self[1]; return 1; }
