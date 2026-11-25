// FUN_020b238c @ 0x020b238c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020b238c @ 0x020b238c (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Append value when signed count below seven.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b238c.txt.
 */
void FUN_020b238c(unsigned int *self,unsigned int value) { int count=(int)self[7]; if(count<7) { self[count]=value; self[7]++; } }
