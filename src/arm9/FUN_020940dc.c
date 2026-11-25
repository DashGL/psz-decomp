// FUN_020940dc @ 0x020940dc (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020940dc @ 0x020940dc (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize selection and dispatch zero descriptor request.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020940dc.txt.
 */
extern int FUN_0207832c(void),FUN_02093fa4(int,int,void *,int,int);extern void *FUN_02031a74(void);extern void FUN_02031e60(void *,int,int,int,int),FUN_0207f40c(void *,int,int,int);int FUN_020940dc(void){signed char desc[4];int id=FUN_0207832c();FUN_02031e60(FUN_02031a74(),id,0,0,0);FUN_0207f40c(desc,0,0,0);if(FUN_02093fa4(0,desc[1],desc,0,0))return 1;return 0;}
