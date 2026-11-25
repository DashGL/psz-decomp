// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_020b3d10 @ 0x020b3d10 (inventory code 0x1e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate16-byte global child.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3d10.txt.
 */
extern void * D_0211aa74[];
extern void *FUN_020ba894(unsigned int),*FUN_020b43b0(void *); void FUN_020b3d10(void) { if(!D_0211aa74[1]) { void *p=FUN_020ba894(16); if(p) p=FUN_020b43b0(p); D_0211aa74[1]=p; } }
