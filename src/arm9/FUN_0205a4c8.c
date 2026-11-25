// FUN_0205a4c8 @ 0x0205a4c8 (0x3c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205a4c8 @ 0x0205a4c8 (inventory code 0x3c, arm)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 219.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b219/0205a4c8.txt.
 */
extern void FUN_02067448(void *,unsigned int),FUN_020673d4(void *,unsigned int),FUN_020656b8(void *,unsigned int,unsigned int);void FUN_0205a4c8(unsigned int *s){char *start=(char *)s[1];unsigned int old=s[2],total=old+s[3];FUN_02067448(start,total);FUN_020673d4(start,total);FUN_020656b8((char *)((unsigned int)start+old),0,total-old);}
