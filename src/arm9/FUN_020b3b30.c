// FUN_020b3b30 @ 0x020b3b30 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b3b30 @ 0x020b3b30 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Subtract three source words componentwise from destination.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3b30.txt.
 */
void FUN_020b3b30(unsigned int *dest,unsigned int *source) { dest[0]-=source[0]; dest[1]-=source[1]; dest[2]-=source[2]; }
