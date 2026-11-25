// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_020bbf94 @ 0x020bbf94
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test incoming mask against global input halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bbf94.txt.
 */
extern char data_0211b330[];
int FUN_020bbf94(unsigned int mask) { if(mask&*(unsigned short *)(data_0211b330+6)) return 1; return 0; }
