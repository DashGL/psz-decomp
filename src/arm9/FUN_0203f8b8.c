// FUN_0203f8b8 @ 0x0203f8b8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203f8b8 @ 0x0203f8b8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Initialize selected header words, invalid id and seven trailing words; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203f8b8.txt.
 */
void *FUN_0203f8b8(unsigned int *self) { int i; self[0]=0; self[2]=0; self[4]=0; self[3]=~0u; for(i=0;i<7;i++) self[i+5]=0; self[12]=0; return self; }
