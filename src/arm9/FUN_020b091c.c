// FUN_020b091c @ 0x020b091c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020b091c @ 0x020b091c (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find category record with matching flag or initialize fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b091c.txt.
 */
extern int FUN_020b0760(void *,unsigned int);extern void FUN_0203955c(void *);void *FUN_020b091c(char *self,unsigned int flag){int i;for(i=0;i<*(short *)(self+12);i++){if((*(unsigned char **)(self+4))[16*i]==2 && FUN_020b0760(*(char **)(self+8)+4*i,flag))return *(char **)(self+4)+16*i;}FUN_0203955c((void *)0x0211aa44);return (void *)0x0211aa44;}
