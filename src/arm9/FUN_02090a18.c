// FUN_02090a18 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02090a18 @ 0x02090a18 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read indexed word for signed index below four, otherwise minus one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02090a18.txt.
 */
int FUN_02090a18(int *self,int index) { if(index<4) return self[index]; return -1; }
