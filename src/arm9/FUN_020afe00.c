// FUN_020afe00 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020afe00 @ 0x020afe00 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read global halfword table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afe00.txt.
 */
extern unsigned short G_020F55EC[]; unsigned int FUN_020afe00(unsigned int index) { return G_020F55EC[index]; }
