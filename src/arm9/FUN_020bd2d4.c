// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b3bc[];
// FUN_020bd2d4 @ 0x020bd2d4 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate through optional global nested allocator using second and third incoming arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd2d4.txt.
 */
extern void *FUN_020c140c(void *,unsigned int,int); void *FUN_020bd2d4(void *unused,unsigned int size,int alignment) { char *p=((char **)((unsigned int)DAT_0211b3bc + 0u))[2]; void *result=0; if(p) { void *heap=*(void **)(p+3896); if(heap) result=FUN_020c140c(heap,size,alignment); } return result; }
