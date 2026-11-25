// FUN_02053cd4 @ 0x02053cd4 (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02053cd4 @ 0x02053cd4 (inventory code 0x40, arm)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 218.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b218/02053cd4.txt.
 */
extern int FUN_02052fe4(unsigned int,...),FUN_02052e54(unsigned int,unsigned int,...);extern void FUN_02052de4(unsigned int,void *);int FUN_02053cd4(void *callback){int status=FUN_02052fe4(1,2);if(status)return status;FUN_02052de4(6,callback);status=FUN_02052e54(6,0);if(!status)status=2;return status;}
