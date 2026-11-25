// FUN_0204682c @ 0x0204682c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_0204682c @ 0x0204682c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Clear seven words; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/0204682c.txt.
 */
void *FUN_0204682c(unsigned int *self) { int i; for(i=0;i<7;i++) self[i]=0; return self; }
