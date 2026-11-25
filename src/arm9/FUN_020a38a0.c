// FUN_020a38a0 @ 0x020a38a0 (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020a38a0 @ 0x020a38a0 (inventory code 0x7c, thumb)
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct object and initialize four descriptor components.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a38a0.txt.
 */
extern char UNK_020fbf2c[],UNK_020fbf54[];extern void FUN_0203020c(void *,void *,int),FUN_02076f0c(void *,int,int),FUN_020306e4(void *,void *,int,int);extern int FUN_0203068c(void *);void *FUN_020a38a0(char *s,void *source){FUN_0203020c(s,source,32);FUN_02076f0c(s+48,FUN_0203068c(s),2);*(void **)s=UNK_020fbf2c;*(void **)(s+48)=UNK_020fbf54;*(void **)(s+68)=**(void ***)(s+4);FUN_020306e4(s+72,*(char **)(s+68)+16,1,1);FUN_020306e4(s+80,*(char **)(s+68)+24,1,0);FUN_020306e4(s+88,*(char **)(s+68),1,1);FUN_020306e4(s+96,*(char **)(s+68)+8,1,0);*(int *)(s+104)=0;*(short *)(s+64)=0;*(short *)(s+66)=1;return s;}
