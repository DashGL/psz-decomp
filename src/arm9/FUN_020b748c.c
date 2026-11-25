// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_020b748c @ 0x020b748c
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return indexed eight-byte global record or default.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b748c.txt.
 */
extern char data_020f5978[];
void *FUN_020b748c(int index) { if(index>=0 && index<7) return data_020f5978+8*index; return (void *)0x020f5968; }
