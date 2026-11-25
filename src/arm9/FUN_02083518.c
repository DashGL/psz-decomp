// FUN_02083518 @ 0x02083518 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02083518 @ 0x02083518 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Pop and clear last word when count nonzero; no upper-bound guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083518.txt.
 */
unsigned int FUN_02083518(unsigned int *self) { unsigned int count=self[20]; if(count) { unsigned int value; count--; self[20]=count; value=self[count]; self[count]=0; return value; } return 0; }
