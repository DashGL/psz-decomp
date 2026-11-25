// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// Match recovery 2026-11-12: preserve each ROM callback literal as an
// address symbol; odd suffixes intentionally retain the Thumb state bit.
// These expressions store/pass raw callback addresses, not data loads.
extern unsigned char DAT_02033905[];
extern unsigned char DAT_02033949[];
extern unsigned char DAT_020379dd[];
extern unsigned char DAT_02037a01[];
extern unsigned char DAT_02050c25[];
extern unsigned char DAT_02050c41[];
extern unsigned char DAT_020f701c[];
// FUN_02037e48 @ 0x02037e48 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/02037e48.txt.
 */
extern void *FUN_0200c2dc(unsigned int,unsigned int,unsigned int,void *,void *);
void *FUN_02037e48(char *s,unsigned int a,unsigned int b,unsigned int c){*(unsigned int *)s=((unsigned int)DAT_020f701c + 0u);*(unsigned short *)(s+22)=65535;*(int *)(s+24)=0;*(unsigned short *)(s+16)=a;*(unsigned short *)(s+18)=b;*(unsigned short *)(s+20)=c;*(void **)(s+4)=FUN_0200c2dc(a,28,8,(void *)((unsigned int)DAT_02033905 + 0u),(void *)((unsigned int)DAT_02033949 + 0u));*(void **)(s+8)=FUN_0200c2dc(b,20,8,(void *)((unsigned int)DAT_020379dd + 0u),(void *)((unsigned int)DAT_02037a01 + 0u));*(void **)(s+12)=FUN_0200c2dc(c,16,8,(void *)((unsigned int)DAT_02050c25 + 0u),(void *)((unsigned int)DAT_02050c41 + 0u));return s;}
