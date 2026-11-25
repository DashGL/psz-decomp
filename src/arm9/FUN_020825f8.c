// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// FUN_020825f8 @ 0x020825f8 (inventory code 0x1c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test mask in one of four bytes at +14, with signed bounds check.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020825f8.txt.
 */
int FUN_020825f8(unsigned char *self,int index,unsigned int mask) { if(index>=0 && index<4) { if((self+index)[20]&mask) return 1; return 0; } return 0; }
