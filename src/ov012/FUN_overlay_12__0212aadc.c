// FUN_overlay_12__0212aadc @ 0x0212aadc (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212aadc @ 0x0212aadc (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear three words at +1c8/+1e0/+1f4; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__0212aadc(char *self) { *(unsigned int *)(self+0x1c8)=0; *(unsigned int *)(self+0x1e0)=0; *(unsigned int *)(self+0x1f4)=0; return self; }
