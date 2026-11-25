// FUN_0208e668 @ 0x0208e668 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_0208e668 @ 0x0208e668 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear four halfword counters and four bytes at +8; return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e668.txt.
 */
void *FUN_0208e668(char *self) { int i; for(i=0;i<4;i++) { ((unsigned short *)self)[i]=0; self[i+8]=0; } return self; }
