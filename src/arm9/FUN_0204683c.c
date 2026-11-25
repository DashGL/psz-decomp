// FUN_0204683c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0204683c @ 0x0204683c (inventory code 0x88, thumb)
// check: 2.0/sp2p3 target=0x90 candidate=0x90 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 53.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b53/0204683c.txt.
 */
extern void *FUN_020ba8bc(unsigned int,int);extern void FUN_020189e4(void *,void *,unsigned int,unsigned int);extern void FUN_02018bf8(unsigned int,void *);
char *FUN_0204683c(char *s,unsigned int a,unsigned int b,unsigned int c,void *resource,unsigned int size,unsigned int bits){*(unsigned int *)s=0x020f8f94;*(int *)(s+4)=0;*(int *)(s+28)=0;*(int *)(s+36)=4096;*(unsigned int *)(s+40)=((*(unsigned int *)(s+40)&0xfffff000)|((unsigned int)(short)bits&4095))&4095;*(int *)(s+44)=0;*(int *)(s+48)=0;*(void **)(s+20)=FUN_020ba8bc(size,16);*(void **)(s+24)=resource;*(void **)(s+32)=resource;*(unsigned int *)(s+8)=a;*(unsigned int *)(s+12)=b;*(unsigned int *)(s+16)=c;*(unsigned int *)(s+40)=(*(unsigned int *)(s+40)&0xfffff000)|(bits&4095);FUN_020189e4(*(void **)(s+20),*(void **)(s+24),*(unsigned int *)(s+8),*(unsigned int *)(s+12));FUN_02018bf8(*(unsigned int *)(s+16),*(void **)(s+20));*(unsigned int *)(s+4)|=2;*(unsigned int *)(s+4)|=4;return s;}
