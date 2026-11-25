// FUN_02055870 @ 0x02055870 (0x4c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02055870 @ 0x02055870 (inventory code 0x4c, arm)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 222.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b222/02055870.txt.
 */
extern int FUN_02052fe4(int,...),FUN_02052e54(int,int,...);extern void FUN_02052de4(int,void *);int FUN_02055870(void *callback,unsigned int arg){int result=FUN_02052fe4(2,7,9);if(result)return result;FUN_02052de4(33,callback);result=FUN_02052e54(33,1,arg);return result?result:2;}
