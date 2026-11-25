// FUN_overlay_12__0211f13c @ 0x0211f13c (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211f13c @ 0x0211f13c (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Set words zero and eight to invalid sentinel, clear word four; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__0211f13c(unsigned int *self) { self[0]=~0u; self[1]=0; self[2]=~0u; return self; }
