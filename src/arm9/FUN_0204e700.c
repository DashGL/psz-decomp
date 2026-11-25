// FUN_0204e700 @ 0x0204e700 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e700 @ 0x0204e700 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/0204e700.txt.
 */
extern void *FUN_0208555c(int); extern int FUN_0204e738(int,int,unsigned int); extern void FUN_0204e6c8(int,unsigned int);
void FUN_0204e700(int id,unsigned int duration,unsigned int range) { int i; if(!range) range=8192; if(FUN_0208555c(id)) for(i=0;i<=3;i++) if(FUN_0204e738(id,i,range)) FUN_0204e6c8(i,duration); }
