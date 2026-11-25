// FUN_020474cc @ 0x020474cc (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020474cc @ 0x020474cc (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/020474cc.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020474fc(void *); extern void FUN_0204b29c(void *,void *,int); extern void FUN_02047384(void *);
void *FUN_020474cc(void *arg) { void *p=FUN_020ba894(0x104); if(p) p=FUN_020474fc(p); if(p) { FUN_0204b29c(p,arg,2); FUN_02047384(p); } return p; }
