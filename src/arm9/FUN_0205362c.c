// FUN_0205362c @ 0x0205362c (0x6c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205362c @ 0x0205362c (inventory code 0x6c, arm)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 230.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b230/0205362c.txt.
 */
extern char *FUN_02052f70(void);extern int FUN_02052fe4(int,...);extern void FUN_020673d4(void *,unsigned int);unsigned int FUN_0205362c(void){char *s=FUN_02052f70(),*p;if(FUN_02052fe4(2,7,8))return 0;FUN_020673d4(*(char **)(s+4)+12,4);p=*(char **)(s+4);if(*(int *)(p+12)==1)return 0;FUN_020673d4(p+60,4);p=*(char **)(s+4);return (*(unsigned short *)(p+60)+31u)&~31u;}
