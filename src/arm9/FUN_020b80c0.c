// FUN_020b80c0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020b80c0 @ 0x020b80c0
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear global table entry for signed index zero through three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b80c0.txt.
 */
extern unsigned int data_020fc854[];
void FUN_020b80c0(int index) { if(index>=0 && index<4) data_020fc854[index]=0; }
