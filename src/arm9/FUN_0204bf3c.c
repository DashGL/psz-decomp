// FUN_0204bf3c @ 0x0204bf3c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204bf3c @ 0x0204bf3c (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 36.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b36/0204bf3c.txt.
 */
extern void FUN_02033db0(void *,void *);
void FUN_0204bf3c(char *s) { void *m=*(void **)0x02108c84; if(m) { char *p=*(char **)(s+0x30); if(p) { *(unsigned int *)(p+24)&=~1u; switch(*(int *)(s+0xac)) { default: case 0: FUN_02033db0(m,*(void **)(s+0x30));break;case 1:FUN_02033db0(m,*(void **)(s+0x30));break;case 2:FUN_02033db0(m,*(void **)(s+0x30));break; } *(void **)(s+0x30)=0; } } }
