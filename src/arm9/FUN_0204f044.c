// FUN_0204f044 @ 0x0204f044 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f044 @ 0x0204f044 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 183.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b183/0204f044.txt.
 */
extern void FUN_0204f094(int,int);extern void *FUN_02050018(void *,void *,void *,int);void FUN_0204f044(void *self,unsigned int kind,void *context){int category=-1;switch(kind){case 11:case 12:category=10;break;case 15:case 16:case 17:case 18:category=12;break;case 19:case 20:case 21:case 22:category=13;break;}if(category>0)FUN_02050018(context,(void *)FUN_0204f094,self,category);}
