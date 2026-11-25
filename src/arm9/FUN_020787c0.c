// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_020787c0 @ 0x020787c0 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize message bytes and embedded descriptor then set final type6/subtype7.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020787c0.txt.
 */
extern void FUN_020787f0(void *); void *FUN_020787c0(unsigned char *self) { self[0]=1; self[1]=0; self[2]=0; self[3]=0; FUN_020787f0(self+4); self[20]=0; ((signed char *)self)[21]=-1; self[22]=0; self[23]=0; self[2]=7; self[3]=0; self[0]=6; return self; }
