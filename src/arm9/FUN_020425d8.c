// FUN_020425d8 @ 0x020425d8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020425d8 @ 0x020425d8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Clear byte +e4, then clear optional child word +4 bit five.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/020425d8.txt.
 */
void FUN_020425d8(char *self) { unsigned int *child; self[0xe4]=0; child=*(unsigned int **)(self+0xcc); if(child) child[1]&=~32u; }
