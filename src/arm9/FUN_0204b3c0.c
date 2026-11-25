// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// FUN_0204b3c0 @ 0x0204b3c0 (inventory code 0x8c, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 56.
 */
extern void *FUN_0204225c(void *,int);extern void FUN_02046be0(void *);extern unsigned int FUN_02046bc8(void *);extern void FUN_02046b94(void *,unsigned int);extern void FUN_02046bdc(void *,unsigned int);
void FUN_0204b3c0(char *s,int index){if(*(unsigned int *)(s+172)<=1){void *obj=*(void **)(s+48);if(obj){int i=0,end=5;if(index<5){i=index;end=(int)((unsigned int)index+1);}for(;i<end;i++){unsigned int mask=1u<<(i+6);if(!(*(unsigned int *)(s+228)&mask)){void *p=FUN_0204225c(obj,i);if(p){FUN_02046be0(p);if(*(unsigned int *)(s+228)&0x4000000){FUN_02046b94(p,FUN_02046bc8(p)-1);FUN_02046bdc(p,0u-*(unsigned int *)(s+76));}else FUN_02046bdc(p,*(unsigned int *)(s+76));}}}}else *(unsigned int *)(s+228)&=0xfffbffff;}}

/* Caller domain, full extent and relocation proof: notes/reference/resume2-low-20261112/FUN_0204b3c0-proof.json. */
