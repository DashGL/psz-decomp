// FUN_02044bac @ 0x02044bac (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044bac @ 0x02044bac (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Initialize three-word handle state to -1, zero, zero; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02044bac.txt.
 */
void *FUN_02044bac(unsigned int *self) { self[0]=~0u; self[1]=0; self[2]=0; return self; }
