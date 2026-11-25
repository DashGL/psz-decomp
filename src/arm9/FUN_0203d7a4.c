// FUN_0203d7a4 @ 0x0203d7a4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203d7a4 @ 0x0203d7a4 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Invalidate word +afc and clear following word; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/0203d7a4.txt.
 */
void *FUN_0203d7a4(char *self) { *(unsigned int *)(self+0xafc)=~0u; *(unsigned int *)(self+0xb00)=0; return self; }
