// FUN_0208092c @ 0x0208092c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_0208092c @ 0x0208092c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve slot then apply helper only when record exists.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208092c.txt.
 */
extern void *FUN_02080898(int); extern void FUN_0208093c(void *);
void FUN_0208092c(int slot) { void *record=FUN_02080898(slot); if(record) FUN_0208093c(record); }
