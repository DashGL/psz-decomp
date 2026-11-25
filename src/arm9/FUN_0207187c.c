// FUN_0207187c @ 0x0207187c (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_0207187c @ 0x0207187c (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear word +a4.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207187c.txt.
 */
void FUN_0207187c(char *self) { *(unsigned int *)(self+0xa4)=0; }
