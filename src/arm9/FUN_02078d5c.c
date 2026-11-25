// FUN_02078d5c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02078d5c @ 0x02078d5c
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read global slot for valid signed index [0,4), else null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078d5c.txt.
 */
extern void * data_0211a418[];
void *FUN_02078d5c(int index) { if(index>=0 && index<4) return data_0211a418[index]; return 0; }
