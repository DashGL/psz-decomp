// FUN_020ba518 @ 0x020ba518 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020ba518 @ 0x020ba518 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize operation fields and allocate sequential identifier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba518.txt.
 */
extern char UNK_020fc8c4[];extern int UNK_0211b288;extern void FUN_020b9cb0(void *,int),FUN_020ba574(void *,void *);void *FUN_020ba518(char *s,void *desc,int a,int b,int c,int d,int owner){FUN_020b9cb0(s,owner);*(void **)s=UNK_020fc8c4;*(int *)(s+32)=0;*(int *)(s+108)=a;*(int *)(s+112)=b;*(int *)(s+116)=c;*(int *)(s+120)=d;*(int *)(s+124)=0;*(int *)(s+128)=0;*(int *)(s+132)=0;*(int *)(s+136)=0;*(int *)(s+136)=++UNK_0211b288;FUN_020ba574(s+36,desc);return s;}
