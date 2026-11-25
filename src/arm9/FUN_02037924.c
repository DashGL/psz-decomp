// FUN_02037924 @ 0x02037924 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037924 @ 0x02037924 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Tail-forward self with child at +10 as second argument.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02037924.txt.
 */
extern void FUN_02037910(void *,void *);
void FUN_02037924(char *self) { FUN_02037910(self,*(void **)(self+16)); }
