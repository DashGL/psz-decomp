// FUN_020afdf4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020afdf4 @ 0x020afdf4
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read global word table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afdf4.txt.
 */
extern unsigned int data_020f5644[];
unsigned int FUN_020afdf4(unsigned int index) { return data_020f5644[index]; }
