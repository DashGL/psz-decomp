// FUN_0204886c @ 0x0204886c (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_0204886c @ 0x0204886c (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/0204886c.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020488a4(void *); extern void FUN_02048950(void *,void *,void *,void *,void *);
void *FUN_0204886c(void *a,void *b,void *c,void *d) { void *p=FUN_020ba894(384); if(p) p=FUN_020488a4(p); if(p) FUN_02048950(p,a,b,c,d); return p; }
