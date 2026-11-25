// FUN_overlay_12__02125efc @ 0x02125efc (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125efc @ 0x02125efc (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Store field +54, clear flag bit one and set bit zero at +60; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02125efc(unsigned int *self,unsigned int value) { self[21]=value; self[24]=(self[24]&~2u)|1; return self; }
