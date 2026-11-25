// FUN_02034700 @ 0x02034700 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034700 @ 0x02034700 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Clear third word then first two words through counted loop; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02034700.txt.
 */
void *FUN_02034700(unsigned int *self) { int i; self[2]=0; for(i=0;i<2;i++) self[i]=0; return self; }
