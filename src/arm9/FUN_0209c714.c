// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// FUN_0209c714 @ 0x0209c714
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set selected slot byte or fallback byte to one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209c714.txt.
 */
void FUN_0209c714(unsigned char *self,int index,int offset) { if(index>=0 && index<4) (self+28*index+offset)[8]=1; else self[offset]=1; }
