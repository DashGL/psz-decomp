// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f8b10[];
extern unsigned char DAT_020f8b18[];
extern unsigned char DAT_020f8b28[];
// FUN_0203f8d8 @ 0x0203f8d8 (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 120.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b120/0203f8d8.txt.
 */
extern void *FUN_020ba8a0(unsigned int),*FUN_0208f068(void);extern void FUN_0203f8b8(void *);extern int FUN_020038ec(void *,unsigned int,const char *,...),FUN_0208ef48(void *,void *,int);char *FUN_0203f8d8(char *s){int i;char *p;void *manager;char name[64];*(unsigned int *)s=0;*(unsigned int *)(s+4)=0;*(unsigned int *)(s+8)=0;*(unsigned int *)(s+12)=0;*(unsigned int *)(s+16)=~0u;*(unsigned int *)(s+20)=0;*(unsigned int *)(s+24)=0;*(unsigned int *)(s+28)=0;*(unsigned int *)(s+32)=0;*(unsigned int *)(s+36)=~0u;*(void **)(s+4)=FUN_020ba8a0(156);*(void **)(s+12)=FUN_020ba8a0(12);*(unsigned int *)(s+8)=3;for(i=0;i<*(int *)(s+8);i++){p=*(char **)(s+4)+52*i;FUN_0203f8b8(p);FUN_020038ec(p+4,4,(const char *)((unsigned int)DAT_020f8b10 + 0u),i);(*(unsigned int **)(s+12))[i]=~0u;}manager=FUN_0208f068();if(manager){FUN_020038ec(name,64,(const char *)((unsigned int)DAT_020f8b18 + 0u),(void *)((unsigned int)DAT_020f8b28 + 0u));*(unsigned int *)(s+36)=FUN_0208ef48(manager,name,14);}return s;}
