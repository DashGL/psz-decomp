// FUN_02098e04 @ 0x02098e04 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02098e04 @ 0x02098e04 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize five words and clear embedded four-byte range.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098e04.txt.
 */
extern void FUN_0206557c(unsigned int,void *,unsigned int); void *FUN_02098e04(unsigned int *self,unsigned int a,unsigned int b) { self[0]=a; self[2]=0; self[3]=b; self[4]=0; FUN_0206557c(0,self+1,4); return self; }
