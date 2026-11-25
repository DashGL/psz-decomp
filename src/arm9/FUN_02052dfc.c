// FUN_02052dfc @ 0x02052dfc (0x58, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02052dfc @ 0x02052dfc (inventory code 0x54, arm)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/02052dfc.txt.
 */
extern int FUN_02066fc8(void *,void **,int);extern void FUN_020673d4(void *,int);extern void FUN_0206706c(void *,void *,int);
void *FUN_02052dfc(void){void *p;if(!FUN_02066fc8((void *)0x02110b08,&p,0))return 0;FUN_020673d4(p,2);if(*(unsigned short *)p&0x8000)return p;FUN_0206706c((void *)0x02110b08,p,1);return 0;}
