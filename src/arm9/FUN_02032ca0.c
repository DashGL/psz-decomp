// FUN_02032ca0 @ 0x02032ca0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02032ca0 @ 0x02032ca0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02032ca0.txt.
 */
void *FUN_02032ca0(char **s,int index) { char *p=*s; if(p) { char *table=*(char **)(p+0x4ec); if(table && index>=0 && index<*(int *)(p+0x4f0)) return table+52*index; return 0; } return 0; }
