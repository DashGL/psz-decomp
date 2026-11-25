// FUN_02078f88 @ 0x02078f88 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_02078f88 @ 0x02078f88 (inventory code 0x5e, thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select object resource and configure secondary resource combination.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078f88.txt.
 */
extern void *UNK_02108c84;extern void FUN_02033dec(void *,void *,unsigned short),FUN_02033e0c(void *,void *,unsigned short,unsigned short),FUN_02033e74(void *,void *,unsigned short);void FUN_02078f88(char *s,int index){void *manager,*object;if(index<0 || index>=2)return;manager=UNK_02108c84;if(!manager)return;object=*(void **)(s+140);if(!object)return;FUN_02033dec(manager,object,((unsigned short *)(s+252))[index]);if(index==1){FUN_02033e0c(manager,object,*(unsigned short *)(s+254),65535);FUN_02033e74(manager,object,*(unsigned short *)(s+252));}*(int *)(s+244)=0;*(int *)(s+248)=index;}
