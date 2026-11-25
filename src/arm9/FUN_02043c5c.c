// FUN_02043c5c @ 0x02043c5c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02043c5c @ 0x02043c5c (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 35.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b35/02043c5c.txt.
 */
extern void FUN_02033db0(void *,void *); extern void FUN_020ba8b4(void *);
void FUN_02043c5c(char *s) { if(*(void **)(s+0x98)) { void *m=*(void **)0x02108c84; int i; for(i=0;i<*(int *)(s+0x9c);i++) FUN_02033db0(m,*(void **)(*(char **)(s+0x98)+112*i)); FUN_020ba8b4(*(void **)(s+0x98)); *(void **)(s+0x98)=0; } }
