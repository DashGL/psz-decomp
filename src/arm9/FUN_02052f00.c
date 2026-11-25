// FUN_02052f00 @ 0x02052f00 (0x70, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_02052f00 @ 0x02052f00 (inventory code 0x6c, arm)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 45.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b45/02052f00.txt.
 */
extern void *FUN_02052dfc(void);extern void FUN_02065774(void *,void *,unsigned int);extern void FUN_020673f0(void *,unsigned int);extern int FUN_020688c0(int,void *,int);extern void FUN_02066f34(void *,void *,int);
int FUN_02052f00(void *src,unsigned int size){void *p=FUN_02052dfc();int result;if(!p)return 8;FUN_02065774(src,p,size);FUN_020673f0(p,size);result=FUN_020688c0(10,p,0);FUN_02066f34((void *)0x02110b08,p,1);return result<0?8:2;}
