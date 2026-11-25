// FUN_overlay_12__02129d04 @ 0x02129d04 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02129d04 @ 0x02129d04 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * If state is one set request flag; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02129d04(unsigned int *self) { if(self[16]==1) self[25]=1; return self; }
