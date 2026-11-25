// FUN_020971dc @ 0x020971dc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020971dc @ 0x020971dc (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit action when unsigned random draw is below signed threshold converted unsigned.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020971dc.txt.
 */
extern unsigned int FUN_02035b60(unsigned int); extern void FUN_0209825c(void *,unsigned int,int,int); void FUN_020971dc(unsigned int *self,short *record) { if(FUN_02035b60(100)<(unsigned int)record[3]) FUN_0209825c((void *)self[1],self[0],record[2],0); }
