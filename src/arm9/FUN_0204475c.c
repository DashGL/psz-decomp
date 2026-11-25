// FUN_0204475c @ 0x0204475c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_0204475c @ 0x0204475c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/0204475c.txt.
 */
void *FUN_0204475c(char *self,int index) { if(index<0 || index>=*(int *)(self+0xa4)) return 0; return *(char **)(self+0xa0)+52*index; }
