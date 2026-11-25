// FUN_020832f8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020832f8 @ 0x020832f8
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store byte in +10 array for signed index [0,4).
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020832f8.txt.
 */
void FUN_020832f8(unsigned char *self,int index,unsigned int value) { if(index>=0 && index<4) (self+index)[16]=value; }
