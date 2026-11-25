// FUN_02098064 @ 0x02098064 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_02098064 @ 0x02098064 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward all four incoming arguments to helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098064.txt.
 */
extern int FUN_0209803c(void *,int,unsigned int,void *); int FUN_02098064(void *self,int index,unsigned int a,void *b) { return FUN_0209803c(self,index,a,b); }
