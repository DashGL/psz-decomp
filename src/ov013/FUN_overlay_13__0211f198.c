// FUN_overlay_13__0211f198 @ 0x0211f198 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211f198 @ 0x0211f198 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Test input-free resident mode accessor for signed value at least two.
 * Field identities and high-level API contracts remain provisional.
 */
extern int FUN_0207315c(void);
int FUN_overlay_13__0211f198(void) { return FUN_0207315c()>=2; }
