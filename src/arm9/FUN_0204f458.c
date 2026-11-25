// FUN_0204f458 @ 0x0204f458 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f458 @ 0x0204f458 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Tail-forward second argument to optional object destruction helper.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/0204f458.txt.
 */
extern void FUN_0204fa5c(void *);
void FUN_0204f458(void *unused,void *child) { FUN_0204fa5c(child); }
