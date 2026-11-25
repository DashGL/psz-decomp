// FUN_02076650 @ 0x02076650 (0xf0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076650 @ 0x02076650 (inventory code 0xe8, thumb)
// check: 2.0/sp2p3 target=0xf0 candidate=0xf0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct an interactive object with four predicate bindings.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076650.txt.
 */
extern char UNK_020fa0c8[],UNK_020fa0f0[];extern void FUN_0203020c(void *,void *,int),FUN_02076f0c(void *,int,int),FUN_020306e4(void *,void *,int,int),FUN_0209af64(int,int),FUN_020304d8(void *),FUN_020304e8(void *);extern int FUN_0203068c(void *),FUN_02033644(int);extern void *FUN_02030dd0(void *);char *FUN_02076650(char *s,void *input){int mode;FUN_0203020c(s,input,3);FUN_02076f0c(s+48,FUN_0203068c(s),0);*(void **)s=UNK_020fa0c8;*(void **)(s+48)=UNK_020fa0f0;*(void **)(s+68)=**(void ***)(s+4);*(void **)(s+72)=FUN_02030dd0(s);s[76]=0;s[77]=0;*(int *)(s+80)=0;FUN_020306e4(s+84,*(char **)(s+68)+16,0,1);FUN_020306e4(s+92,*(char **)(s+68)+24,1,0);FUN_020306e4(s+100,*(char **)(s+68)+8,1,1);FUN_020306e4(s+108,*(char **)(s+68)+32,1,1);*(int *)(s+116)=-1;s[76]=FUN_02033644(1);FUN_0209af64(FUN_0203068c(s),*(int *)(*(char **)(s+68)+4));s[77]=*(signed char *)(*(char **)(s+68)+1);if(!*(signed char *)(s+77)){FUN_020304d8(s);*(int *)(s+80)|=2;}mode=3;if(*(signed char *)(*(char **)(s+4)+18)==1){mode=2;FUN_020304e8(s);}*(short *)(s+64)=0;*(short *)(s+66)=mode;return s;}
