// FUN_02083590 @ 0x02083590 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02083590 @ 0x02083590 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Shuffle pointer array using live unsigned count and random index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083590.txt.
 */
extern void *FUN_020780f4(void); extern unsigned int FUN_0207816c(void *,unsigned int); void FUN_02083590(unsigned int *self) { unsigned int i,count; if(self[20]>1) { for(i=0;i<(count=self[20]);i++) { unsigned int j=FUN_0207816c(FUN_020780f4(),count); unsigned int temp=self[i]; self[i]=self[j]; self[j]=temp; } } }
