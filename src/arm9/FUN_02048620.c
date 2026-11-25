// FUN_02048620 @ 0x02048620 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048620 @ 0x02048620 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/02048620.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_02048658(void *); extern void FUN_020486b4(void *,void *,void *,void *,void *);
void *FUN_02048620(void *a,void *b,void *c,void *d) { void *p=FUN_020ba894(284); if(p) p=FUN_02048658(p); if(p) FUN_020486b4(p,a,b,c,d); return p; }
