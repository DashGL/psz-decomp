// FUN_0208fcf4 @ 0x0208fcf4 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0208fcf4 @ 0x0208fcf4 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate and broadcast actor action 14.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208fcf4.txt.
 */
extern void *UNK_02108c64;extern char UNK_0211a578[];extern void FUN_02032dfc(void *,void *),FUN_0208d6d0(void *,int,unsigned short,int,int,int,int);extern int FUN_0206d36c(void *,int),FUN_0204ddd8(int,int);int FUN_0208fcf4(char *s,int a,int b,int c){int descriptor[5];if(s){FUN_02032dfc(descriptor,UNK_02108c64);if(!FUN_0206d36c(descriptor,0) && FUN_0204ddd8(*(int *)(s+252),14)){FUN_0208d6d0(UNK_0211a578,*(int *)(s+252),*(unsigned short *)(s+318),14,a,b,c);return 1;}}return 0;}
