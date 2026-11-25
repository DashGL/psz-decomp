// FUN_overlay_12__02131abc @ 0x02131abc (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131abc @ 0x02131abc (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke per-slot routine for indices zero through seven.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__02131aec(unsigned int);
void FUN_overlay_12__02131abc(void) { int i; for(i=0;i<8;i++) FUN_overlay_12__02131aec(i); }
