// FUN_0204d68c @ 0x0204d68c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204d68c @ 0x0204d68c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/0204d68c.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_0204d6c4(void *); extern void FUN_0204d764(void *,void *,void *);
void *FUN_0204d68c(void *a,void *b) { void *p=FUN_020ba894(32); if(p) p=FUN_0204d6c4(p); if(p) FUN_0204d764(p,a,b); return p; }
