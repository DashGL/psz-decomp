// FUN_0209facc @ 0x0209facc (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0209facc @ 0x0209facc (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize four state components from source record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209facc.txt.
 */
extern char UNK_020fb870[];extern void FUN_0203020c(void *,void *,int),FUN_020306e4(void *,void *,int,int);void *FUN_0209facc(char *s,void *source){FUN_0203020c(s,source,22);*(void **)s=UNK_020fb870;*(char **)(s+48)=**(char ***)(s+4);FUN_020306e4(s+52,*(char **)(s+48)+20,1,1);FUN_020306e4(s+60,*(char **)(s+48)+28,1,0);FUN_020306e4(s+68,*(char **)(s+48)+4,1,1);FUN_020306e4(s+76,*(char **)(s+48)+12,1,0);*(int *)(s+84)=0;*(int *)(s+88)=0;return s;}
