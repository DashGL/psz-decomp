// FUN_02050994 @ 0x02050994 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02050994 @ 0x02050994 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/02050994.txt.
 */
extern void *FUN_0208f068(void); extern void *FUN_0208efa8(void *,int,int,void *);
void *FUN_02050994(char *s,int a,void *b) { if(*(int *)(s+0x54)>=0) { void *p=FUN_0208f068(); if(p) return FUN_0208efa8(p,*(int *)(s+0x54),a,b); } return 0; }
