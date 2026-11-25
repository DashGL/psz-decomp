// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// FUN_020bd714 @ 0x020bd714 (inventory code 0x1a, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward three incoming inputs to optional global receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd714.txt.
 */
extern void * D_0211b3bc[];
extern void FUN_020be1c4(void *,unsigned int,unsigned int,unsigned int); void FUN_020bd714(unsigned int a,unsigned int b,unsigned int c) { void *p=D_0211b3bc[2]; if(p) FUN_020be1c4(p,a,b,c); }
