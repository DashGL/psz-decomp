// FUN_02040320 @ 0x02040320 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_02040320 @ 0x02040320 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Bounds-check signed index against optional table count and return 112-byte record.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/02040320.txt.
 */
void *FUN_02040320(char *self,int index) { char *table=*(char **)(self+28); if(table && index>=0 && index<*(int *)(table+4)) return *(char **)table+112*index; return 0; }
