// FUN_0207f7d8 @ 0x0207f7d8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207f7d8 @ 0x0207f7d8 (thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full switch/stack-argument semantics
 * decoded from named address. Evidence: scratch/coverage-high-game/inspect308.txt. */
extern unsigned int UNK_020f2d58[6][5];unsigned int FUN_0207f7d8(void *unused,int row,int level){if(level<=0 || level>5)return 0;if(row<0 || row>=6)return 0;return UNK_020f2d58[row][level-1];}
