// FUN_02048008 @ 0x02048008 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048008 @ 0x02048008 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 33.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b33/02048008.txt.
 */
extern void *FUN_020ba894(unsigned int); extern char *FUN_02048048(void *); extern void FUN_020473e8(void *,void *,int);
void *FUN_02048008(void *a,unsigned int b) { char *p=FUN_020ba894(264); if(p) p=FUN_02048048(p); if(p) { FUN_020473e8(p,a,1); *(unsigned int *)(p+0x104)=b; *(unsigned int *)(p+0xe4)|=1; } return p; }
