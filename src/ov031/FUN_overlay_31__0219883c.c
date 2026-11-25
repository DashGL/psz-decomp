// FUN_overlay_31__0219883c @ 0x0219883c (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219883c @ 0x0219883c (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Test first owner word for state three.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_31__0219883c(unsigned int *self) { return self[0]==3; }
