// FUN_0207f4d4 @ 0x0207f4d4 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f4d4 @ 0x0207f4d4 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize sentinel first word and three zero words; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f4d4.txt.
 */
void *FUN_0207f4d4(unsigned int *self) { self[0]=~0u; self[1]=0; self[2]=0; self[3]=0; return self; }
