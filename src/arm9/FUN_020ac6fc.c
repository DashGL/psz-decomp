// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// FUN_020ac6fc @ 0x020ac6fc (inventory code 0x6c, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Replace active actor descriptor and send inventory update.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ac6fc.txt.
 */
extern int FUN_0203ae60(void *),FUN_0203b6c4(void *);extern void FUN_0204f0c4(int,void *,int),FUN_0203955c(void *),FUN_0203a6f8(void *,void *),FUN_020b057c(void *),FUN_0208d748(void *,int,void *);extern void *FUN_02086e3c(void);void FUN_020ac6fc(char *s){if(!FUN_0203ae60(s)){FUN_0204f0c4(*(int *)(s+252),s+384,0);FUN_0203955c(s+384);s[384]=0;s[385]=0;FUN_0203a6f8(s,s+384);if(!FUN_0203b6c4(s))*(int *)(s+576)=24;FUN_020b057c(FUN_02086e3c());FUN_0208d748(s+588,*(int *)(s+252),s+384);}}
