// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_020b6d7c @ 0x020b6d7c
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern signed char D_020f5944[];
/* USA ROM reconstruction, 2026-11-04.
 * Test mapped ability or fallback ability39.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b6d7c.txt.
 */
extern int FUN_020b73fc(void *,int); int FUN_020b6d7c(void *self,int index) { if(FUN_020b73fc(self,D_020f5944[index]) || FUN_020b73fc(self,39)) return 1; return 0; }
