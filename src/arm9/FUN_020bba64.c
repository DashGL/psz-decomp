// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020bba64 @ 0x020bba64
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Register callback and require status two; otherwise set global state one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bba64.txt.
 */
extern unsigned int data_0211b2c0[];
extern int FUN_02053be0(void *); extern void FUN_020bb40c(void); int FUN_020bba64(void) { if(FUN_02053be0((void *)FUN_020bb40c)!=2) { data_0211b2c0[20]=1; return 0; } return 1; }
