// FUN_020446a8 @ 0x020446a8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020446a8 @ 0x020446a8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Set word +94 bit one; target returns adjusted field address.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020446a8.txt.
 */
void FUN_020446a8(char *self) { *(unsigned int *)(self+0x94)|=2; }
