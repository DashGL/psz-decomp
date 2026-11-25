// FUN_020b6db0 @ 0x020b6db0 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020b6db0 @ 0x020b6db0 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test ability37 or fallback ability39.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b6db0.txt.
 */
extern int FUN_020b73fc(void *,int); int FUN_020b6db0(void *self) { if(FUN_020b73fc(self,37) || FUN_020b73fc(self,39)) return 1; return 0; }
