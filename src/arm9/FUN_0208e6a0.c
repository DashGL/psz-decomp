// FUN_0208e6a0 @ 0x0208e6a0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_0208e6a0 @ 0x0208e6a0 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read unsigned halfword counter for slot [0,3], default zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e6a0.txt.
 */
unsigned int FUN_0208e6a0(unsigned short *self,int index) { if(index>=0 && index<=3) return self[index]; return 0; }
