// FUN_02032cd0 @ 0x02032cd0 (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02032cd0 @ 0x02032cd0 (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/02032cd0.txt.
 */
extern int FUN_0206d124(void *);extern int FUN_0206d158(void *);extern int FUN_0207f45c(void *,void *);extern int FUN_0207f430(void *,void *);
int FUN_02032cd0(char *s){if(FUN_0206d124(s+56)){if(FUN_0206d158(s+56))return !FUN_0207f45c(s+20,s+12);if(FUN_0207f430(s+20,s+24))return 0;return *(signed char *)(s+21)!=0;}return 0;}
