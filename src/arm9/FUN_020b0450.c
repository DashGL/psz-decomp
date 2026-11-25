// FUN_020b0450 @ 0x020b0450 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020b0450 @ 0x020b0450 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Remove matched inventory entry or subtract selected amount.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0450.txt.
 */
extern int FUN_020b0410(void *,int,int),FUN_020849d4(void *);extern void FUN_0203955c(void *),FUN_02084a1c(void *,int);int FUN_020b0450(char *s,int index,int amount){int n=FUN_020b0410(s,index,amount);if(n!=-1){char *p=*(char **)(s+4)+16*n;if(amount<0 || amount==FUN_020849d4(p))FUN_0203955c(p);else FUN_02084a1c(p,FUN_020849d4(p)-amount);return 1;}return 0;}
