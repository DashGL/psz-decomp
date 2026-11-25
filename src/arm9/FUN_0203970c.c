// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f988c[];
extern unsigned char DAT_020f98a8[];
extern unsigned char DAT_020f997c[];
extern unsigned char DAT_02108cf4[];
// FUN_0203970c @ 0x0203970c (inventory code 0xb2, thumb)
// check: 2.0/sp2p3 target=0xc8 candidate=0xc8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 128.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b128/0203970c.txt.
 */
extern void FUN_0203bfb4(void *),FUN_02080ae0(unsigned int,int),FUN_0204a670(void *,unsigned int),FUN_0204f458(void *,void *),FUN_0203528c(void *,unsigned int),FUN_02086500(void *,unsigned int),FUN_0208657c(void *,unsigned int),FUN_02038e00(void *),FUN_020ba940(void *);extern void *FUN_0204a580(void),*FUN_0204f3b8(void);void *FUN_0203970c(char *s){unsigned int record[3];*(unsigned int *)s=((unsigned int)DAT_020f988c + 0u);*(unsigned int *)(s+32)=((unsigned int)DAT_020f98a8 + 0u);*(unsigned int *)(s+240)=((unsigned int)DAT_020f997c + 0u);FUN_0203bfb4(s);FUN_02080ae0(*(unsigned int *)(s+252),1);FUN_0204a670(FUN_0204a580(),*(unsigned int *)(s+252));FUN_0204f458(FUN_0204f3b8(),*(void **)(s+436));*(void **)(s+436)=0;FUN_0204f458(FUN_0204f3b8(),*(void **)(s+432));*(void **)(s+432)=0;FUN_0203528c(*(void **)((unsigned int)DAT_02108cf4 + 0u),*(unsigned int *)(s+252));FUN_02086500(s+334,*(unsigned int *)(s+252));record[0]=*(unsigned int *)(s+180);record[1]=*(unsigned int *)(s+188);((unsigned short *)record)[4]=*(unsigned short *)(s+192);((unsigned short *)record)[5]=0;FUN_0208657c(record,*(unsigned int *)(s+252));FUN_02038e00(s);return s;}
