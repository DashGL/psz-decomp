// FUN_02042884 @ 0x02042884 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02042884 @ 0x02042884 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Call two helpers on fixed global receivers in order.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02042884.txt.
 */
extern void FUN_02051038(void *),FUN_02040284(void *);
void FUN_02042884(void) { FUN_02051038(*(void **)0x0210e24c); FUN_02040284(*(void **)0x02108d5c); }
