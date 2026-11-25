// FUN_020b2430 @ 0x020b2430 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020b2430 @ 0x020b2430 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear count words in three adjacent32-byte records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2430.txt.
 */
void FUN_020b2430(char *self) { int i; for(i=0;i<3;i++) *(unsigned int *)(self+32*i+28)=0; }
