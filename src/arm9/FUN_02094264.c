// FUN_02094264 @ 0x02094264 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_02094264 @ 0x02094264 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve indexed entry from embedded descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094264.txt.
 */
extern void *FUN_02094190(void *,int); void *FUN_02094264(char *self,int index) { return FUN_02094190(self+12,index); }
