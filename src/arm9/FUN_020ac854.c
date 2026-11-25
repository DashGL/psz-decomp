// FUN_020ac854 @ 0x020ac854 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020ac854 @ 0x020ac854 (inventory code 0x64, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Replace secondary actor descriptor and send inventory update.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ac854.txt.
 */
extern int FUN_0203ae60(void *);extern void FUN_0204f0c4(int,void *,int),FUN_0203955c(void *),FUN_0203a850(void *,void *,int),FUN_020b0684(void *),FUN_0208d748(void *,int,void *);extern void *FUN_02086e3c(void);void FUN_020ac854(char *s){if(!FUN_0203ae60(s)){FUN_0204f0c4(*(int *)(s+252),s+416,2);FUN_020b0684(FUN_02086e3c());FUN_0203955c(s+416);s[416]=0;s[417]=17;s[419]=33;FUN_0203a850(s,s+416,1);FUN_0208d748(s+588,*(int *)(s+252),s+416);}}
