// FUN_020af5bc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// FUN_020af5bc @ 0x020af5bc (inventory code 0x16, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return halfword table entry for signed index one through four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af5bc.txt.
 */
extern unsigned short D_020f55e4[];
unsigned int FUN_020af5bc(int index) { unsigned int result=0; if(index>=1 && index<5) result=D_020f55e4[index-1]; return result; }
