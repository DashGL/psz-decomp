// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_020bd74c @ 0x020bd74c
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward three incoming inputs to optional global receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd74c.txt.
 */
extern void * data_0211b3bc[];
extern void FUN_020bd76c(void *,unsigned int,unsigned int,unsigned int); void FUN_020bd74c(unsigned int a,unsigned int b,unsigned int c) { void *p=data_0211b3bc[2]; if(p) FUN_020bd76c(p,a,b,c); }
