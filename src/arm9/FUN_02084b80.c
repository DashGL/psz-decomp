// FUN_02084b80 @ 0x02084b80 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02084b80 @ 0x02084b80 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install table and invalidate three handle words; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084b80.txt.
 */
void *FUN_02084b80(unsigned int *self) { self[0]=0x020fa96c; self[1]=~0u; self[2]=~0u; self[3]=~0u; return self; }
