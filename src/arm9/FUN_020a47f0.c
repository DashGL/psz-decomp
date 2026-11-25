// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// FUN_020a47f0 @ 0x020a47f0
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Report nonzero receiver entry for valid signed index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a47f0.txt.
 */
int FUN_020a47f0(unsigned int *self,int index) { if(index>=0 && index<4) { if((self+index)[7]) return 1; return 0; } return 0; }
