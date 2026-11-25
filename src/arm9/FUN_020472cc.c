// FUN_020472cc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020472cc @ 0x020472cc (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 114.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b114/020472cc.txt.
 */
extern void FUN_0204570c(void *,int);void FUN_020472cc(char *s,int index){unsigned int data[2];FUN_0204570c(data,index);*(unsigned int *)(s+28)=data[0]|(*(unsigned int *)(s+28)&~2u);if(*(int *)(s+16)<0)*(int *)(s+16)=((signed char *)data)[4];if(*(int *)(s+20)<0)*(int *)(s+20)=((signed char *)data)[5];if(*(int *)(s+92)<=0)*(int *)(s+92)=((short *)data)[3];}
