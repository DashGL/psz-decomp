// FUN_020a17d4 @ 0x020a17d4 (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_020a17d4 @ 0x020a17d4 (inventory code 0xa0, thumb)
// check: 2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update linked effects and retire them after a timeout.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a17d4.txt.
 */
extern void FUN_020af9f8(void *,int),FUN_020afa4c(void *,int,int),FUN_020aeb34(void *),FUN_0203497c(void *),FUN_0203041c(void *);void FUN_020a17d4(char *s){int i;void *p;if(*(int *)(s+56)){if(*(int *)(s+60)&1){for(i=0;i<*(short *)(s+66);i++){FUN_020af9f8(*(char **)(s+52)+116*i,0);FUN_020aeb34(*(char **)(s+52)+116*i);}++*(short *)(s+64);if(*(short *)(s+64)>90){*(int *)(s+56)=0;for(i=0;i<*(short *)(s+66);i++){p=*(void **)(*(char **)(s+52)+116*i+104);if(p)FUN_0203497c(p);}}}else{for(i=0;i<*(short *)(s+66);i++){FUN_020afa4c(*(char **)(s+52)+116*i,0,*(int *)(s+56));FUN_020aeb34(*(char **)(s+52)+116*i);}}}FUN_0203041c(s);}
