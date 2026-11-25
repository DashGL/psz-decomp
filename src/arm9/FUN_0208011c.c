// FUN_0208011c @ 0x0208011c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_0208011c @ 0x0208011c (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply alternate first helper and common second helper to nonnull receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208011c.txt.
 */
extern void FUN_02080394(void *), FUN_02080130(void *);
void FUN_0208011c(void *self) { if(self) { FUN_02080394(self); FUN_02080130(self); } }
