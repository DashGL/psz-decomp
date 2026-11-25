// FUN_020affc0 @ 0x020affc0 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020affc0 @ 0x020affc0 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set offset and changed flag.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020affc0.txt.
 */
void FUN_020affc0(unsigned int *self,unsigned int value) { self[2]=value; self[4]=1; }
