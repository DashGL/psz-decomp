// FUN_02041b2c @ 0x02041b2c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041b2c @ 0x02041b2c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Return child word +4 when both pointers exist, otherwise zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02041b2c.txt.
 */
void *FUN_02041b2c(void **self) { void **child=self[1]; if(child) { void *value=child[1]; if(value) return value; } return 0; }
