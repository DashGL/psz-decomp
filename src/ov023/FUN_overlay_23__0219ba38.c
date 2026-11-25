// FUN_overlay_23__0219ba38 @ 0x0219ba38 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219ba38 @ 0x0219ba38 (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Invalidate four owner words +64 through +70; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_23__0219ba38(unsigned int *self) { self[25]=~0u; self[26]=~0u; self[27]=~0u; self[28]=~0u; return self; }
