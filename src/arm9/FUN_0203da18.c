// FUN_0203da18 @ 0x0203da18 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch17-manifest.json; original draft retained for referenced provenance.
// FUN_0203da18 @ 0x0203da18 (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 116.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b116/0203da18.txt.
 */
extern int FUN_020390f4(void *);extern void FUN_0206ea9c(void *,unsigned int,unsigned int),FUN_02039038(void *,unsigned int,void *);extern char *FUN_020384a4(void *,unsigned int);void FUN_0203da18(char *s,unsigned int a,unsigned int b){char *part,*manager;void *p;unsigned int i;if(!FUN_020390f4(s)){FUN_0206ea9c(s,a,b);part=FUN_020384a4(s,*(unsigned int *)(s+208));s[513]=0;if(part){for(i=0;i<8;i++)if(*(unsigned char *)(part+8+i)!=255)FUN_02039038(s,i,(void *)0x020ac409);}manager=*(char **)0x02108c84;if(manager){p=((void **)(manager+64))[*(unsigned int *)(manager+100)];if(p)((void (*)(void *))(*(void ***)p)[13])(p);}}}
