// FUN_02034948 @ 0x02034948 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034948 @ 0x02034948 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02034948.txt.
 */
extern void FUN_0201d37c(void *,void *);
void FUN_02034948(char **s,void *arg) { int i; for(i=0;i<2;i++) { char *p=s[i]; if(p && *(void **)(p+0x1c)) FUN_0201d37c(*(void **)(p+0x1c),arg); } }
