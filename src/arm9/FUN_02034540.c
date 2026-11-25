// FUN_02034540 @ 0x02034540 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034540 @ 0x02034540 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Tail-forward embedded object +b8 to reset routine; callee clears three records and trailing count.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02034540.txt.
 */
extern void FUN_020c6be4(void *);
void FUN_02034540(char *self) { FUN_020c6be4(self+0xb8); }
