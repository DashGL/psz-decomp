// FUN_0208cd04 @ 0x0208cd04 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0208cd04 @ 0x0208cd04 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch signed effect parameters to either entity category.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208cd04.txt.
 */
extern int FUN_02078188(int),FUN_02078198(int);extern void *FUN_0208555c(int);extern void FUN_0203b958(void *,int,int,int),FUN_0204e254(int,int,int,int);void FUN_0208cd04(char *s){if(FUN_02078188(*(int *)(s+4))){void *p=FUN_0208555c(*(int *)(s+4));if(p)FUN_0203b958(p,((signed char *)s)[8],((signed char *)s)[9],*(int *)(s+12));}else if(FUN_02078198(*(int *)(s+4)))FUN_0204e254(*(int *)(s+4),((signed char *)s)[8],((signed char *)s)[9],*(int *)(s+12));}
