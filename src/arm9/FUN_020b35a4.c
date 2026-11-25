// FUN_020b35a4 @ 0x020b35a4 (0xfc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020b35a4 @ 0x020b35a4 (inventory code 0xf4, thumb)
// check: 2.0/sp2p3 target=0xfc candidate=0xfc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Randomize object launch position and velocity with rounded fixed-point products.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b35a4.txt.
 */
extern char UNK_0211c844[];extern int FUN_020b3410(void *,int);void FUN_020b35a4(char *s){int random;*(int *)(s+64)=(((long long)FUN_020b3410(UNK_0211c844,4095)*10240+2048)>>12)+16384;*(int *)(s+28)=((long long)(FUN_020b3410(UNK_0211c844,4095)-2048)*38912+2048)>>12;*(int *)(s+36)=((long long)(FUN_020b3410(UNK_0211c844,4095)-2048)*38912+2048)>>12;*(int *)(s+32)=FUN_020b3410(UNK_0211c844,4095)+4096;random=FUN_020b3410(UNK_0211c844,4095);*(int *)(s+52)=((long long)*(int *)(s+64)*(random-2048)+2048)>>12;random=FUN_020b3410(UNK_0211c844,4095);*(int *)(s+60)=((long long)*(int *)(s+64)*(random-2048)+2048)>>12;*(int *)(s+56)=*(int *)(s+32);}
