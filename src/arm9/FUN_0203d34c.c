// FUN_0203d34c @ 0x0203d34c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203d34c @ 0x0203d34c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Test word +afc is not all-ones sentinel.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0203d34c.txt.
 */
int FUN_0203d34c(char *self) { return *(unsigned int *)(self+0xafc)!=~0u; }
