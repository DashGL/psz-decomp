// FUN_020a0ac8 @ 0x020a0ac8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020a0ac8 @ 0x020a0ac8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize table, minus-one fields, and three zero words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0ac8.txt.
 */
void *FUN_020a0ac8(unsigned int *self) { self[0]=0x020fbb94; self[1]=-1; self[2]=-1; self[3]=0; self[4]=0; self[5]=0; return self; }
