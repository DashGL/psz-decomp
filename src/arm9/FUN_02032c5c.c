// FUN_02032c5c @ 0x02032c5c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02032c5c @ 0x02032c5c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02032c5c.txt.
 */
extern int FUN_02082fd0(void *,void *,void *,int,int);
int FUN_02032c5c(char *s,void *a,void *b) { void *p=*(void **)s; if(p && *(int *)(s+0x1c)>=0) return FUN_02082fd0(p,a,b,*(signed char *)(s+0x16),*(int *)(s+0x1c)); return 0; }
