// FUN_0203a9d4 @ 0x0203a9d4 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203a9d4 @ 0x0203a9d4 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Extract low nibble from word +184.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0203a9d4.txt.
 */
unsigned int FUN_0203a9d4(char *self) { return *(unsigned int *)(self+0x184)&15; }
