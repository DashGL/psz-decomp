// FUN_0203b43c @ 0x0203b43c (0x130, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b43c @ 0x0203b43c (inventory code 0x126, thumb)
// check: 2.0/sp2p3 target=0x130 candidate=0x130 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 85.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b85/0203b43c.txt.
 */
typedef struct{unsigned int x,y,z;} Vec;typedef struct{unsigned int w[25];} Effect;extern void FUN_020380d4(void *);extern void FUN_0203acc0(void *);extern void FUN_0203ae04(void *);extern void FUN_0203a850(void *,void *,int);extern void FUN_0203a6f8(void *,void *);extern void FUN_02032dfc(void *,void *);extern int FUN_0206d36c(void *,void *);extern void FUN_02038700(void *,unsigned int,int);extern int FUN_02085880(unsigned int);extern void FUN_0203666c(void *);extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int);extern char *FUN_02046d94(void *,int,int);
void FUN_0203b43c(char *s){unsigned int descriptor[5];Vec position;Effect effect;FUN_020380d4(s);FUN_0203acc0(s);FUN_0203ae04(s);FUN_0203a850(s,s+416,1);FUN_0203a6f8(s,s+384);FUN_02032dfc(descriptor,*(void **)0x02108c64);*(int *)(s+264)=FUN_0206d36c(descriptor,0)?1024:696;*(int *)(s+576)=24;*(int *)(s+204)=-1;FUN_02038700(s,*(unsigned int *)(s+212),4);*(unsigned int *)(s+248)|=8;if(FUN_02085880(*(unsigned int *)(s+252))==1){*(unsigned int *)(s+248)&=~2u;*(unsigned int *)(s+248)&=~1u;}if(*(void **)0x0210e234){char *child;FUN_0203666c(&effect);FUN_02035408(&position,*(unsigned int *)(s+156),*(unsigned int *)(s+160)+205,*(unsigned int *)(s+164));*(Vec *)((char *)&effect+32)=position;effect.w[21]=5;effect.w[22]=*(unsigned int *)(s+252);*(char **)(s+224)=FUN_02046d94(&effect,0,0);child=*(char **)(s+224);if(child)*(unsigned int *)(child+228)&=~1u;}s[511]=255;}
