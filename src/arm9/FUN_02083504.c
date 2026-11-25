// FUN_02083504 @ 0x02083504 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_02083504 @ 0x02083504 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Push word into twenty-entry stack when unsigned count is below twenty.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083504.txt.
 */
void FUN_02083504(unsigned int *self,unsigned int value) { unsigned int count=self[20]; if(count<20) { self[count]=value; self[20]++; } }
