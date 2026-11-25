// FUN_02053f28 @ 0x02053f28 (0x5c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_02053f28 @ 0x02053f28 (inventory code 0x5c, arm)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 229.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b229/02053f28.txt.
 */
extern int FUN_02052fe4(int,...),FUN_02052e54(int,int,...);extern char *FUN_02052f70(void);extern void FUN_02052de4(int,void *);int FUN_02053f28(void *callback,unsigned int arg){char *s;int result=FUN_02052fe4(1,2);if(result)return result;s=FUN_02052f70();*(unsigned short *)(s+336)=0;*(unsigned int *)(s+332)=0;FUN_02052de4(8,callback);result=FUN_02052e54(8,1,arg);return result?result:2;}
