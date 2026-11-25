// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_020bb0c8 @ 0x020bb0c8 (inventory code 0x1c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read global pointer array under positive signed count bound.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bb0c8.txt.
 */
extern int D_0211b2c0[];
extern void * D_0211b320[];
void *FUN_020bb0c8(int index) { int count=D_0211b2c0[23]; if(count>=1 && index>=0 && index<count) return D_0211b320[index]; return 0; }
