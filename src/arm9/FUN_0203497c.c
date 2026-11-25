// FUN_0203497c @ 0x0203497c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_0203497c @ 0x0203497c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Clear word +18 bit zero on each of two optional children.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203497c.txt.
 */
void FUN_0203497c(unsigned int **self) { int i; for(i=0;i<2;i++) { unsigned int *child=self[i]; if(child) child[6]&=~1u; } }
