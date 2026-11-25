// FUN_0208b94c @ 0x0208b94c (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_0208b94c @ 0x0208b94c (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check membership in special and category selections.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b94c.txt.
 */
extern void *FUN_02086e3c(void);extern int FUN_020b077c(void *),FUN_020b07f4(void *),FUN_020b086c(void *),FUN_020b08e4(void *,unsigned char);int FUN_0208b94c(void *unused,int id){int i;if(id==FUN_020b077c(FUN_02086e3c()) || id==FUN_020b07f4(FUN_02086e3c()) || id==FUN_020b086c(FUN_02086e3c()))return 1;for(i=0;i<4;i++)if(id==FUN_020b08e4(FUN_02086e3c(),(unsigned char)i))return 1;return 0;}
