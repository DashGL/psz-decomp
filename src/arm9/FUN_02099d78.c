// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_02099d78 @ 0x02099d78
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read indexed word +28 or default one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099d78.txt.
 */
unsigned int FUN_02099d78(unsigned int *self,int index) { if(index>=0 && index<5) return (self+index)[10]; return 1; }
