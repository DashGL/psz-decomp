// FUN_02055748 @ 0x02055748 (0x50, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02055748 @ 0x02055748 (inventory code 0x50, arm)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 226.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b226/02055748.txt.
 */
extern int FUN_02052f9c(void),FUN_02052e54(int,int,...);extern void FUN_02052de4(int,void *);int FUN_02055748(void *callback,unsigned int mode){int result=FUN_02052f9c();if(result)return result;if(mode!=0&&mode!=1)return 6;FUN_02052de4(25,callback);result=FUN_02052e54(25,1,mode);return result?result:2;}
