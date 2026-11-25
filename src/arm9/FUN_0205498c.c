// FUN_0205498c @ 0x0205498c (0x6c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205498c @ 0x0205498c (inventory code 0x6c, arm)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 230.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b230/0205498c.txt.
 */
extern char *FUN_02052f70(void);extern int FUN_02052fe4(int,...),FUN_02052e54(int,int,...);extern void FUN_02052de4(int,void *),FUN_020673d4(void *,unsigned int);int FUN_0205498c(void *callback){char *s=FUN_02052f70();int result=FUN_02052fe4(1,11);if(result)return result;FUN_020673d4(*(char **)(s+4)+16,4);if(!*(unsigned int *)(*(char **)(s+4)+16))return 3;FUN_02052de4(19,callback);result=FUN_02052e54(19,0);return result?result:2;}
