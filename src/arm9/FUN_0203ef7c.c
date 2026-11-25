// FUN_0203ef7c @ 0x0203ef7c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203ef7c @ 0x0203ef7c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/0203ef7c.txt.
 */
int FUN_0203ef7c(char *s) { int i; for(i=0;i<4;i++) { char *p=((char **)(s+0x43c))[i]; if(p && *(int *)(p+4)==1) return 1; } return 0; }
