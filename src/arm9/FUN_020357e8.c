// FUN_020357e8 @ 0x020357e8 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020357e8 @ 0x020357e8 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Tail-forward child at +10 to activation helper.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/020357e8.txt.
 */
extern void FUN_02037880(void *);
void FUN_020357e8(char *self) { FUN_02037880(*(void **)(self+16)); }
