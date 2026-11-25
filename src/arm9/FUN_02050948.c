// FUN_02050948 @ 0x02050948 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02050948 @ 0x02050948 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 37.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b37/02050948.txt.
 */
extern unsigned int FUN_02050440(void *,int,int);
void FUN_02050948(signed char *out,char *s,int type,int arg) {int i;if(type==14)type=0;out[0]=0;out[1]=-1;out[2]=0;out[0]=2;for(i=0;i<3;i++){unsigned int id=FUN_02050440(s+24*i,type,arg);if(id!=255){out[2]=id;out[1]=i;out[0]=1;if(type==19)out[1]=2;return;}}}
