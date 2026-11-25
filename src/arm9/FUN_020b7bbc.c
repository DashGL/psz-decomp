// FUN_020b7bbc @ 0x020b7bbc (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020b7bbc @ 0x020b7bbc (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Normalize word +94 bit four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7bbc.txt.
 */
int FUN_020b7bbc(char *self) { if(*(unsigned int *)(self+148)&16) return 1; return 0; }
