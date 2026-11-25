// FUN_020b2444 @ 0x020b2444 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020b2444 @ 0x020b2444 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Append to selected record for index zero through two.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2444.txt.
 */
extern void FUN_020b238c(void *,unsigned int); void FUN_020b2444(char *self,int index,unsigned int value) { if(index>=0 && index<=2) FUN_020b238c(self+32*index,value); }
