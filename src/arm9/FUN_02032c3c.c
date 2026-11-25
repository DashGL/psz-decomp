// FUN_02032c3c @ 0x02032c3c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02032c3c @ 0x02032c3c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Match nonnegative word +20 directly; negative stored value matches only input zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02032c3c.txt.
 */
int FUN_02032c3c(char *self,int value) { int stored=*(int *)(self+32); if(stored>=0) return stored==value; return value==0; }
