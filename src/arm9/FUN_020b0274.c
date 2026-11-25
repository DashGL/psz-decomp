// FUN_020b0274 @ 0x020b0274 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b0274 @ 0x020b0274 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test three-argument lookup result against minus one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0274.txt.
 */
extern int FUN_020b02d8(void *,void *,int); int FUN_020b0274(void *self,void *arg) { if(FUN_020b02d8(self,arg,1)!=-1) return 1; return 0; }
