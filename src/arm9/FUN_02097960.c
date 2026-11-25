// FUN_02097960 @ 0x02097960 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_02097960 @ 0x02097960 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Queue bounded action only when no action is pending.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097960.txt.
 */
extern void FUN_02098214(void *,int,int);int FUN_02097960(char *self,int index,unsigned int a,unsigned int b){if(!(*(unsigned int *)(self+80)&16) && index>=0 && index<32){*(short *)(self+36)=1;*(short *)(self+38)=index;*(unsigned int *)(self+40)=a;*(unsigned int *)(self+44)=b;*(unsigned int *)(self+80)|=16;FUN_02098214(*(void **)(self+4),*(int *)self,index);return 1;}return 0;}
