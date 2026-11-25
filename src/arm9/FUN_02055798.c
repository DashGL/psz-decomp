// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// FUN_02055798 @ 0x02055798 (inventory code 0x60, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 230.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b230/02055798.txt.
 */
extern int FUN_02052f9c(void),FUN_02052e54(int,int,...);extern void FUN_02052de4(int,void *);int FUN_02055798(void *callback,unsigned int a,unsigned int b,unsigned int c,unsigned short d){int result=FUN_02052f9c();if(result)return result;FUN_02052de4(29,callback);result=FUN_02052e54(29,4,a,b,c,(unsigned int)d);return result?result:2;}
