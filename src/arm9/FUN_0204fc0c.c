// FUN_0204fc0c @ 0x0204fc0c (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fc0c @ 0x0204fc0c (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/0204fc0c.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_0204fc44(void *); extern void FUN_0204fd14(void *,void *,void *,void *,void *);
void *FUN_0204fc0c(void *a,void *b,void *c,void *d) { void *p=FUN_020ba894(396); if(p) p=FUN_0204fc44(p); if(p) FUN_0204fd14(p,a,b,c,d); return p; }
