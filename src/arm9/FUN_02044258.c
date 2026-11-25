// FUN_02044258 @ 0x02044258 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044258 @ 0x02044258 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/02044258.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int); extern void FUN_020ba8b4(void *);
void FUN_02044258(char *s) { if(*(void **)(s+0xa0)) { int i; for(i=0;i<*(int *)(s+0xa4);i++) { void *m=FUN_020be450(); FUN_020bed1c(m,*(int *)(*(char **)(s+0xa0)+52*i)); } FUN_020ba8b4(*(void **)(s+0xa0)); *(void **)(s+0xa0)=0; } }
