// FUN_02032ea0 @ 0x02032ea0 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02032ea0 @ 0x02032ea0 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02032ea0.txt.
 */
extern int FUN_0205136c(void *,int,int); extern char *FUN_02032e5c(void *,int);
int FUN_02032ea0(void **s,int id) { if(FUN_0205136c(*(void **)0x0210e24c,id,0)) { void *p=*s; if(p) { char *r=FUN_02032e5c(p,id); if(r && FUN_0205136c(*(void **)0x0210e24c,*(signed char *)(r+0x32),0)) return 1; } } return 0; }
