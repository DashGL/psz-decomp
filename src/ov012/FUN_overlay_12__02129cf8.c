// FUN_overlay_12__02129cf8 @ 0x02129cf8 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02129cf8 @ 0x02129cf8 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Transition zero state +40 to one; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02129cf8(unsigned int *self) { if(self[16]==0) self[16]=1; return self; }
