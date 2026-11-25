// FUN_020bcda0 @ 0x020bcda0 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020bcda0 @ 0x020bcda0 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy two unsigned halfwords.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bcda0.txt.
 */
void FUN_020bcda0(unsigned short *dest,unsigned short *source) { dest[0]=source[0]; dest[1]=source[1]; }
