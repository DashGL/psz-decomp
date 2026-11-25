// FUN_0208c098 @ 0x0208c098 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0208c098 @ 0x0208c098 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize entity descriptor and attached state component.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208c098.txt.
 */
extern char UNK_020faa64[],UNK_020faa88[];extern void FUN_0203020c(void *,void *,int),FUN_02076574(void *,int,int),FUN_020306e4(void *,void *,int,int);extern int FUN_0203068c(void *),FUN_02030dd0(void *);void *FUN_0208c098(char *s,void *source,int arg){FUN_0203020c(s,source,12);FUN_02076574(s+48,FUN_0203068c(s),1);*(void **)s=UNK_020faa64;*(void **)(s+48)=UNK_020faa88;*(int *)(s+68)=arg;*(int *)(s+72)=0;*(void **)(s+76)=**(void ***)(s+4);*(int *)(s+80)=FUN_02030dd0(s);FUN_020306e4(s+84,*(void **)(s+76),1,1);*(unsigned short *)(s+64)=0;*(unsigned short *)(s+66)=5;return s;}
