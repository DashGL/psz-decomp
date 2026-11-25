// FUN_02087f48 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02087f48 @ 0x02087f48
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map signed second argument through four-halfword table, default 7fff.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02087f48.txt.
 */
extern unsigned short data_020f3dfc[];
unsigned int FUN_02087f48(void *unused,int index) { unsigned int value=0x7fff; if(index>=0 && index<4) value=data_020f3dfc[index]; return value; }
