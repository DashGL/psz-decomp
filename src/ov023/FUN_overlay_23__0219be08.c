// FUN_overlay_23__0219be08 @ 0x0219be08 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219be08 @ 0x0219be08 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Invalidate two words then replace first with input; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_23__0219be08(unsigned int *self,unsigned int value) { self[0]=~0u; self[1]=~0u; self[0]=value; return self; }
