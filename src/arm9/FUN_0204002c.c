// FUN_0204002c @ 0x0204002c (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0204002c @ 0x0204002c (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/0204002c.txt.
 */
extern int FUN_02040010(void *,int);
int FUN_0204002c(char *s,int key) { int i; if(FUN_02040010(s,key)) return 1; for(i=0;i<3;i++) if(((int *)*(void **)(s+0xc))[i]==key) return 1; return 0; }
