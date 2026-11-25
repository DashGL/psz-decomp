// FUN_02059490 @ 0x02059490 (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02059490 @ 0x02059490 (inventory code 0x44, arm)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 227.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b227/02059490.txt.
 */
extern int FUN_0205860c(void *,int);extern void FUN_020585b0(void *,int),FUN_020593fc(void *);extern void *FUN_020591e8(void *);int FUN_02059490(char *s){void *next;int result=FUN_0205860c(s,*(int *)(s+16));FUN_020585b0(s,result);next=FUN_020591e8(*(void **)(s+8));if(next)FUN_020593fc(next);return *(int *)(s+20)==0;}
