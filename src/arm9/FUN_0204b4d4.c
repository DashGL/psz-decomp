// FUN_0204b4d4 @ 0x0204b4d4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204b4d4 @ 0x0204b4d4 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Clear word +e4 bit one then zero word +48; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/0204b4d4.txt.
 */
void *FUN_0204b4d4(char *self) { *(unsigned int *)(self+0xe4)&=~2u; *(unsigned int *)(self+0x48)=0; return self; }
