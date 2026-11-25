// FUN_02078a24 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// FUN_02078a24 @ 0x02078a24 (inventory code 0x12, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store pointed word into global slot when signed index is [0,4).
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078a24.txt.
 */
extern unsigned int D_0211a3d4[];
void FUN_02078a24(int index,unsigned int *value) { if(index>=0 && index<4) D_0211a3d4[index]=*value; }
