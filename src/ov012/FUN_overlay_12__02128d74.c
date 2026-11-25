// FUN_overlay_12__02128d74 @ 0x02128d74 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128d74 @ 0x02128d74 (code 0x12, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Install dispatch table and four invalid sentinel fields; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02128d74(unsigned int *self) { self[0]=0x0213dfb4; self[1]=~0u; self[2]=~0u; self[3]=~0u; self[4]=~0u; return self; }
