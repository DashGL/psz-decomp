// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_02059efc @ 0x02059efc (inventory code 0x48, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 220.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b220/02059efc.txt.
 */
extern int FUN_020594d4(void *,int);int FUN_02059efc(char *s,void *archive,unsigned int first,unsigned int second,unsigned int length){*(void **)(s+8)=archive;*(unsigned int *)(s+56)=length;*(unsigned int *)(s+48)=first;*(unsigned int *)(s+52)=second;if(!FUN_020594d4(s,7))return 0;*(unsigned int *)(s+12)=(*(unsigned int *)(s+12)|16)&~32u;return 1;}
