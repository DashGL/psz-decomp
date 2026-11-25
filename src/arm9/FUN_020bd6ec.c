// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b3bc[];
// FUN_020bd6ec @ 0x020bd6ec (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward four callback inputs to current manager.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd6ec.txt.
 */
extern void FUN_020be14c(void *,int,unsigned int,void *,unsigned int); void FUN_020bd6ec(int a,unsigned int b,void *c,unsigned int d) { void *p=*(void **)((unsigned int)DAT_0211b3bc + 8u); if(p) FUN_020be14c(p,a,b,c,d); }
