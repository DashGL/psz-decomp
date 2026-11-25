// FUN_02083430 @ 0x02083430 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02083430 @ 0x02083430 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize four indices and randomize by four swaps.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083430.txt.
 */
extern void *FUN_020780f4(void); extern unsigned int FUN_0207816c(void *,unsigned int); void *FUN_02083430(unsigned int *self) { unsigned int i;self[4]=0;self[0]=0;self[3]=3;self[2]=2;self[1]=1;self[4]=4;for(i=0;i<4;i++){unsigned int j=FUN_0207816c(FUN_020780f4(),4);unsigned int value=self[j];self[j]=self[i];self[i]=value;}return self; }
