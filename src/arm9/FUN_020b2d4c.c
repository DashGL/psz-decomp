// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020faad0[];
extern unsigned char DAT_020fc6c8[];
extern unsigned char DAT_020fc6ec[];
// FUN_020b2d4c @ 0x020b2d4c (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct registered category object with forwarded source.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2d4c.txt.
 */
extern void FUN_0203020c(void *,void *,int),FUN_020b80ac(int,void *);void *FUN_020b2d4c(char *self,void *desc){void *member;FUN_0203020c(self,desc,37);*(unsigned int *)(self+48)=((unsigned int)DAT_020faad0 + 0u);*(unsigned int *)self=((unsigned int)DAT_020fc6c8 + 0u);*(unsigned int *)(self+48)=((unsigned int)DAT_020fc6ec + 0u);*(void **)(self+52)=**(void ***)(self+4);*(int *)(self+56)=-1;member=self;if(self)member=self+48;FUN_020b80ac((*(signed char **)(self+52))[2],member);return self;}
