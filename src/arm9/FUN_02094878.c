// FUN_02094878 @ 0x02094878 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02094878 @ 0x02094878 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply global helper to receiver identifier if receiver present.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094878.txt.
 */
extern void FUN_0208da28(void *,unsigned int); void FUN_02094878(char *self) { if(self) FUN_0208da28((void *)0x0211a5c4,*(unsigned int *)(self+252)); }
