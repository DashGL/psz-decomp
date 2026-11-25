// FUN_02040e10 @ 0x02040e10 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040e10 @ 0x02040e10 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 36.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b36/02040e10.txt.
 */
extern void FUN_02040e5c(void *,void *,void *);extern void FUN_0204123c(void *,void *,void *);
void FUN_02040e10(char *s) {char *p=*(char **)(s+0xb8);int i;for(i=0;i<*(int *)(s+0xbc);i++,p+=280) {if(*(void **)p)FUN_02040e5c(s,*(void **)p,p);if(*(void **)p)FUN_0204123c(s,*(void **)p,p);*(unsigned int *)(p+20)=*(unsigned int *)(p+0xfc);*(unsigned int *)(p+24)=*(unsigned int *)(p+0x100);}}
