// FUN_020475ec @ 0x020475ec (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020475ec @ 0x020475ec (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/020475ec.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_02047644(void *); extern void FUN_020473e8(void *,void *,int);
void *FUN_020475ec(void *arg,unsigned int value) { char *p=FUN_020ba894(0x10c); if(p) p=FUN_02047644(p); if(p) { FUN_020473e8(p,arg,0); *(unsigned int *)(p+0x104)=0; *(unsigned int *)(p+0x108)=value; } return p; }
