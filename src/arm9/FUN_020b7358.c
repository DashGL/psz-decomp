// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020b7358 @ 0x020b7358
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_020f58f4[];
/* USA ROM reconstruction, 2026-11-04.
 * Build five descriptors and query mapped mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7358.txt.
 */
extern void FUN_020b6200(void *,void *); extern unsigned int FUN_020b737c(void *,void *,int); unsigned int FUN_020b7358(void *self,unsigned int index) { unsigned int descriptors[20]; FUN_020b6200(self,descriptors); return FUN_020b737c(self,descriptors,D_020f58f4[index]); }
