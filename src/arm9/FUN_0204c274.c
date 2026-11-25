// FUN_0204c274 @ 0x0204c274 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c274 @ 0x0204c274 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/0204c274.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_0204c2a4(void *); extern void FUN_0204c36c(void *,void *,void *,void *);
void *FUN_0204c274(void *a,void *b,void *c) { void *p=FUN_020ba894(0x124); if(p) p=FUN_0204c2a4(p); if(p) FUN_0204c36c(p,a,b,c); return p; }
