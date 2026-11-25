// FUN_0203e3a8 @ 0x0203e3a8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e3a8 @ 0x0203e3a8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Clear word +250 bit zero when receiver predicate returns false.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203e3a8.txt.
 */
extern int FUN_0203ae60(void *);
void FUN_0203e3a8(char *self) { if(!FUN_0203ae60(self)) *(unsigned int *)(self+0x250)&=~1u; }
