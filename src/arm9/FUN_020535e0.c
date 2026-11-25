// FUN_020535e0 @ 0x020535e0 (0x4c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_020535e0 @ 0x020535e0 (inventory code 0x4c, arm)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 222.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b222/020535e0.txt.
 */
extern char *FUN_02052f70(void);extern int FUN_02052f80(void);extern void FUN_020673d4(void *,unsigned int),FUN_020655d8(void *,void *,unsigned int);int FUN_020535e0(void *dst){char *state=FUN_02052f70();int result=FUN_02052f80();if(result)return result;if(!dst)return 6;FUN_020673d4(*(void **)(state+4),2000);FUN_020655d8(*(void **)(state+4),dst,2000);return 0;}
