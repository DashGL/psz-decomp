// FUN_overlay_12__02120678 @ 0x02120678 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120678 @ 0x02120678 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Test signed owner field for positivity.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_12__02120678(char *self) { return *(int *)(self+0x1b4)>0; }
