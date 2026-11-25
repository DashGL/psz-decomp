// FUN_02049098 @ 0x02049098 (0x96, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02049098 @ 0x02049098 (inventory code 0x96, thumb)
// check: 2.0/sp2p3 target=0x96 candidate=0x96 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 124.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b124/02049098.txt.
 */
extern void FUN_020473e8(void *,void *,int),FUN_02046d00(void *,void *);extern char *FUN_020475ec(void *,void *),*FUN_0204daa8(unsigned int);extern int FUN_0204fbd0(void *);void FUN_02049098(char *s,void *desc,void *arg){unsigned int copy[25];char *owner,*child;FUN_020473e8(s,desc,0);*(unsigned int *)(s+260)=0;*(void **)(s+264)=arg;*(unsigned int *)(s+280)=0;*(unsigned int *)(s+268)=0;FUN_02046d00(copy,desc);copy[16]=5;*(void **)(s+268)=FUN_020475ec(copy,arg);owner=FUN_0204daa8(*(unsigned int *)(s+232));if(owner&&*(void **)(s+268)&&*(void **)(owner+432)){if(FUN_0204fbd0(*(void **)(owner+432))){child=*(char **)(s+268);*(unsigned int *)(child+228)&=~1u;}else{child=*(char **)(s+268);*(unsigned int *)(child+228)|=1;}}}
