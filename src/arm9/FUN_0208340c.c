// FUN_0208340c @ 0x0208340c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0208340c @ 0x0208340c (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume unsigned resource amount or decrement zero-amount counter.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208340c.txt.
 */
void FUN_0208340c(unsigned int *self,unsigned int amount) { if(amount) { if(self[0]>=amount) { self[0]-=amount; self[2]+=amount; } } else if(self[1]) self[1]--; }
