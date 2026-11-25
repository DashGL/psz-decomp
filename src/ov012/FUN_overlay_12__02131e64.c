// FUN_overlay_12__02131e64 @ 0x02131e64 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131e64 @ 0x02131e64 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * When resident slot predicate succeeds, move owner state +2c to three.
 * Field identities and high-level API contracts remain provisional.
 */
extern int FUN_020c2e14(int);
void FUN_overlay_12__02131e64(int *self) { if(FUN_020c2e14(self[12])) self[11]=3; }
