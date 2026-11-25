// FUN_020763a4 @ 0x020763a4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_020763a4 @ 0x020763a4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set or clear selected bit in word+e4 according to input.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020763a4.txt.
 */
void FUN_020763a4(char *self,unsigned int bit,int set) { unsigned int value; if(set) value=*(unsigned int *)(self+228)|(1u<<bit); else value=*(unsigned int *)(self+228)&~(1u<<bit); *(unsigned int *)(self+228)=value; }
