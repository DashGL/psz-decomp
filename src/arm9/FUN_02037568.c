// FUN_02037568 @ 0x02037568 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037568 @ 0x02037568 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Clear word +94 bit 3; target returns adjusted field address.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02037568.txt.
 */
void FUN_02037568(char *self) { *(unsigned int *)(self+0x94)&=~8u; }
