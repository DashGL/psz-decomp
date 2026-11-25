// FUN_overlay_12__0212111c @ 0x0212111c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212111c @ 0x0212111c (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Wrap signed owner field +18 to zero above three or to three below zero; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__0212111c(int *self) { if(self[6]>=4) self[6]=0; else if(self[6]<0) self[6]=3; return self; }
