// FUN_0208df20 @ 0x0208df20 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_0208df20 @ 0x0208df20 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run helper on nonnull first-word child.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208df20.txt.
 */
extern void FUN_02030b2c(void *);
void FUN_0208df20(void **self) { if(*self) FUN_02030b2c(*self); }
