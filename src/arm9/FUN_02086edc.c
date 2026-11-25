// FUN_02086edc @ 0x02086edc (0xa4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_02086edc @ 0x02086edc (inventory code 0x8e, thumb)
// check: 2.0/sp2p3 target=0xa4 candidate=0xa4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset inventory, auxiliary arrays and saved timestamp.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086edc.txt.
 */
extern void FUN_02091880(void *),FUN_0203955c(void *),FUN_020783b0(void *),FUN_02086f80(void *);void FUN_02086edc(char *s){int i;s[100]=0;FUN_02091880(s+112);for(i=0;i<100;i++)FUN_0203955c(s+0x6b4+16*i);*(int *)(s+0xcf4)=0;FUN_020783b0(s+0xd28);*(int *)(s+0xd38)=0;*(int *)(s+0xd3c)=0;for(i=0;i<12;i++)s[0xd40+i]=0;for(i=0;i<8;i++)*(int *)(s+0xd4c+4*i)=0;*(short *)(s+0xd6c)=0;s[0xd6e]=0;s[0xd6f]=0;s[0xd70]=0;s[0xd71]=0;s[0xd72]=0;s[0xd73]=0;s[101]=100;*(int *)(s+104)=0;FUN_02086f80(s+108);}
