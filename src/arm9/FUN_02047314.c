// FUN_02047314 @ 0x02047314 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02047314 @ 0x02047314 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/02047314.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_02047368(void *); extern void FUN_020473e8(void *,void *,void *);
void *FUN_02047314(void *a,void *b) { void *p=0; if(*(void **)0x0210e234) { p=FUN_020ba894(260); if(p) p=FUN_02047368(p); if(p) FUN_020473e8(p,a,b); } return p; }
