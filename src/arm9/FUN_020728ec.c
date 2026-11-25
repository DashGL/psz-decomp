// FUN_020728ec @ 0x020728ec (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020728ec @ 0x020728ec (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset each resolved record up to signed receiver count.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020728ec.txt.
 */
extern void *FUN_020728d4(void *,int); extern void FUN_02072910(void *,void *); void FUN_020728ec(int *self) { int i; for(i=0;i<self[0];i++) FUN_02072910(self,FUN_020728d4(self,i)); }
