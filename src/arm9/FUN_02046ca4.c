// FUN_02046ca4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02046ca4 @ 0x02046ca4 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 115.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b115/02046ca4.txt.
 */
extern void FUN_02046d00(void *,void *),FUN_0204570c(void *,int);extern unsigned int FUN_0208546c(void);extern void *FUN_02048304(void *,int,int);void *FUN_02046ca4(char *s,int a,int b){unsigned int data[25],tmpl[2];FUN_02046d00(data,s);FUN_0204570c(tmpl,*(int *)(s+84));data[7]=tmpl[0];if((int)data[4]<0)data[4]=((signed char *)tmpl)[4];if((int)data[5]<0)data[5]=((signed char *)tmpl)[5];if((int)data[23]<=0)data[23]=((short *)tmpl)[3];data[22]=FUN_0208546c();return FUN_02048304(data,a,b);}
