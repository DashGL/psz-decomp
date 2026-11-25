// FUN_020be2d8 @ 0x020be2d8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020be2d8 @ 0x020be2d8 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return signed halfword modulo187 when positive, otherwise minus one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be2d8.txt.
 */
int FUN_020be2d8(char *self) { int value=*(short *)(self+18); if(value<=0) return -1; return (short)(value%187); }
