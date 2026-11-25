// FUN_020afb70 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// FUN_020afb70 @ 0x020afb70 (inventory code 0x14, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Append to global four-word array while signed receiver count below four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afb70.txt.
 */
extern unsigned int D_0211a9a8[];
void FUN_020afb70(unsigned int *self,unsigned int value) { int index=(int)self[14]; if(index<4) { D_0211a9a8[index]=value; self[14]++; } }
