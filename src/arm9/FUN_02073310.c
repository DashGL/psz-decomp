// FUN_02073310 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// FUN_02073310 @ 0x02073310 (inventory code 0x8, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return signed global byte +5.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073310.txt.
 */
extern signed char D_0211a210[];
int FUN_02073310(void) { return D_0211a210[5]; }
