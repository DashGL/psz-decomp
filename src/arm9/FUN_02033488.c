// FUN_02033488 @ 0x02033488 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033488 @ 0x02033488 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/02033488.txt.
 */
int FUN_02033488(char *self,unsigned int key) { int i; for(i=0;i<*(int *)(self+0x50);i++) if(*(unsigned int *)(self+16*i+4)==key) return 1; return 0; }
