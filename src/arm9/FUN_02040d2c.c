// FUN_02040d2c @ 0x02040d2c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040d2c @ 0x02040d2c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Test first word of indexed 280-byte table record for zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02040d2c.txt.
 */
int FUN_02040d2c(char *self,unsigned int index) { return *(unsigned int *)(*(char **)(self+0xb8)+280*index)==0; }
