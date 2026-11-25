// FUN_0203bea0 @ 0x0203bea0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bea0 @ 0x0203bea0 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Test byte +1fc is nonzero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/0203bea0.txt.
 */
int FUN_0203bea0(char *self) { return *(unsigned char *)(self+0x1fc)!=0; }
