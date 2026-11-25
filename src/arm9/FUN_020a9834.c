// FUN_020a9834 @ 0x020a9834 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020a9834 @ 0x020a9834 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve relative index if below signed count, otherwise zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a9834.txt.
 */
extern void *FUN_020a97c4(void *,int); void *FUN_020a9834(int *self,int index) { if(index<self[4]) return FUN_020a97c4(self,index-self[6]); return 0; }
