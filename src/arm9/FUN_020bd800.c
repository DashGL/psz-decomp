// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b3bc[];
// FUN_020bd800 @ 0x020bd800 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward six callback inputs to current manager.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd800.txt.
 */
extern void FUN_020bdb88(void *,int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int); void FUN_020bd800(int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e,unsigned int f) { void *p=*(void **)((unsigned int)DAT_0211b3bc + 8u); if(p) FUN_020bdb88(p,a,b,c,d,e,f); }
