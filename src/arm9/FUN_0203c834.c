// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f70d0[];
extern unsigned char DAT_020f70ec[];
extern unsigned char DAT_020f71c0[];
extern unsigned char DAT_020f71e4[];
extern unsigned char DAT_0211a1f4[];
// FUN_0203c834 @ 0x0203c834 (inventory code 0xa4, thumb)
// check: 2.0/sp2p3 target=0xbc candidate=0xbc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 127.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b127/0203c834.txt.
 */
extern void FUN_020ba940(void *),FUN_02085158(unsigned int,void *),FUN_0206e8c0(void),FUN_020ab750(void *),FUN_020bed1c(void *,int),FUN_0203c824(void *),FUN_020472bc(void *),FUN_0208ded0(void *),FUN_0203970c(void *);extern void *FUN_020be450(void);void *FUN_0203c834(char *s){int handle,i;void *p;*(unsigned int *)s=((unsigned int)DAT_020f70d0 + 0u);*(unsigned int *)(s+32)=((unsigned int)DAT_020f70ec + 0u);*(unsigned int *)(s+240)=((unsigned int)DAT_020f71c0 + 0u);*(unsigned int *)(s+588)=((unsigned int)DAT_020f71e4 + 0u);FUN_02085158(*(unsigned int *)(s+252),s+36);p=*(void **)((unsigned int)DAT_0211a1f4 + 0u);if(p)FUN_0206e8c0();FUN_020ab750(s);handle=*(int *)(s+2988);if(handle!=-1){FUN_020bed1c(FUN_020be450(),handle);*(int *)(s+2988)=-1;}for(i=0;i<4;i++){p=((void **)(s+664))[i];if(p)FUN_0203c824(p);}p=*(void **)(s+660);if(p){FUN_020472bc(p);*(void **)(s+660)=0;}FUN_0208ded0(s+588);FUN_0203970c(s);FUN_020ba940(s);return s;}
