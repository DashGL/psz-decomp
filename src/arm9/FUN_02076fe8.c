// FUN_02076fe8 @ 0x02076fe8 (0x98, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076fe8 @ 0x02076fe8 (inventory code 0x8e, thumb)
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct object and optional dynamic descriptor component.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076fe8.txt.
 */
extern char UNK_020fa1a0[],UNK_020fa1c4[];extern void FUN_0203020c(void *,void *,int),FUN_02076574(void *,int,int);extern int FUN_0203068c(void *);extern void *FUN_020ba894(unsigned int),*FUN_020306e4(void *,void *,int,int);void *FUN_02076fe8(char *s,void *source){int i;void *p;FUN_0203020c(s,source,6);FUN_02076574(s+48,FUN_0203068c(s),5);*(void **)s=UNK_020fa1a0;*(void **)(s+48)=UNK_020fa1c4;*(void **)(s+68)=**(void ***)(s+4);*(void **)(s+72)=0;*(int *)(s+84)=0;FUN_020306e4(s+88,*(void **)(s+68),1,1);for(i=0;i<4;i++)*(short *)(s+76+2*i)=-1;if(*(short *)(*(char **)(s+68)+8)!=-1){*(short *)(s+76)=*(short *)(*(char **)(s+68)+8);p=FUN_020ba894(8);if(p)p=FUN_020306e4(p,s+76,0,1);*(void **)(s+72)=p;}*(short *)(s+64)=0;*(short *)(s+66)=23;return s;}
