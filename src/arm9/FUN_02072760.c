// FUN_02072760 @ 0x02072760 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072760 @ 0x02072760 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set indexed record two words and mark dirty bit one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072760.txt.
 */
void FUN_02072760(char *self,int index,unsigned int a,unsigned int b) { if(index>=0 && index<*(int *)(self+172)) { signed char *p=*(signed char **)(self+168)+52*index; *(unsigned int *)(p+8)=a; *(unsigned int *)(p+12)=b; p[18]|=2; } }
