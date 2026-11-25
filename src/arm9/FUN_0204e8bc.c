// FUN_0204e8bc @ 0x0204e8bc (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e8bc @ 0x0204e8bc (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/0204e8bc.txt.
 */
extern int FUN_02078188(int);extern int FUN_02078198(int);extern int FUN_020781b0(int);extern int FUN_0204e90c(void *,int);extern int FUN_0204e944(void *,int,int);extern int FUN_02033594(void *,int);
int FUN_0204e8bc(void *out,int id,int index){int r=0;if(FUN_02078188(id))r=FUN_0204e90c(out,id);else if(FUN_02078198(id))r=FUN_0204e944(out,id,index);else if(FUN_020781b0(id))r=FUN_02033594(out,id);return r;}
