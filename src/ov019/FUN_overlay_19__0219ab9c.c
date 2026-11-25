// FUN_overlay_19__0219ab9c @ 0x0219ab9c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219ab9c @ 0x0219ab9c (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * For state one, clear progress, store incoming third argument and transition to two; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_19__0219ab9c(unsigned int *self,unsigned int unused,unsigned int value) { if(self[9]==1) { self[8]=0; self[19]=value; self[9]=2; } return self; }
