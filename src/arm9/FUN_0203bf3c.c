// FUN_0203bf3c @ 0x0203bf3c (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bf3c @ 0x0203bf3c (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Tail-forward signed player index at +fc.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0203bf3c.txt.
 */
extern int FUN_02085880(int);
int FUN_0203bf3c(char *self) { return FUN_02085880(*(int *)(self+0xfc)); }
