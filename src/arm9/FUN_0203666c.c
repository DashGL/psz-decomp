// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// Unsigned halfword field evidence: notes/sessions/continue-low-20261112.md
// FUN_0203666c @ 0x0203666c (inventory code 0x72, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 46.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b46/0203666c.txt.
 */
extern void FUN_02035408(void *,int,int,int);
char *FUN_0203666c(char *s){int i;*(unsigned short *)s=-1;*(unsigned short *)(s+2)=-1;for(i=0;i<5;i++)*(unsigned short *)(s+4+2*i)=-1;*(int *)(s+16)=-1;*(int *)(s+20)=-1;*(int *)(s+24)=4096;*(int *)(s+28)=0;FUN_02035408(s+32,0,0,0);FUN_02035408(s+44,4096,4096,4096);*(unsigned short *)(s+56)=0;*(unsigned short *)(s+58)=0;*(unsigned short *)(s+60)=0;*(unsigned short *)(s+62)=0;*(int *)(s+64)=-1;*(int *)(s+68)=-1;*(int *)(s+72)=-1;*(int *)(s+76)=-1;*(int *)(s+80)=0;*(unsigned int *)(s+28)|=2;*(int *)(s+84)=149;*(int *)(s+88)=-1;*(int *)(s+92)=0;*(int *)(s+96)=0;return s;}
