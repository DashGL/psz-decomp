// FUN_020799dc @ 0x020799dc (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_020799dc @ 0x020799dc (inventory code 0x6c, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize player state and optional descriptor component.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020799dc.txt.
 */
extern char UNK_020fa3b4[];extern void *UNK_02108c64;extern void FUN_0203020c(void *,void *,int),FUN_0207a030(void *),FUN_020302e8(void *,void *),FUN_020799c4(void *,void *);extern void *FUN_020ba894(unsigned int),*FUN_020306e4(void *,void *,int,int);extern int FUN_02030dd0(void *);void *FUN_020799dc(char *s,void *source){int position[3];void *manager;FUN_0203020c(s,source,4);*(void **)s=UNK_020fa3b4;*(void **)(s+48)=**(void ***)(s+4);*(int *)(s+52)=FUN_02030dd0(s);*(int *)(s+56)=0;*(void **)(s+60)=0;*(int *)(s+64)=-1;*(int *)(s+68)=0;if(*(signed char *)(*(char **)(s+4)+18)==1){void *p=FUN_020ba894(8);if(p)p=FUN_020306e4(p,*(void **)(s+48),*(signed char *)(*(char **)(s+48)+8),1);*(void **)(s+60)=p;}FUN_0207a030(s);manager=UNK_02108c64;FUN_020302e8(position,s);FUN_020799c4(manager,position);return s;}
