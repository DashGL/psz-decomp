// FUN_02083350 @ 0x02083350 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02083350 @ 0x02083350 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve seven-by-ten record grid or sentinel.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083350.txt.
 */
void *FUN_02083350(char *self,int index,int row) { if(index>=0 && index<7 && row>=0 && row<10) return self+196*row+28*index; return self+1960; }
