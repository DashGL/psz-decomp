// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b3bc[];
// FUN_020bd6cc @ 0x020bd6cc (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * On zero callback status, update optional global receiver and set byte state four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd6cc.txt.
 */
extern void FUN_020bde30(void *); void FUN_020bd6cc(int status) { char *p=((char **)((unsigned int)DAT_0211b3bc + 0u))[2]; if(p && status==0) { FUN_020bde30(p); p[28]=4; } }
