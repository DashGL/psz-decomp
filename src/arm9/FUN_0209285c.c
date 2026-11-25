// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020faf68[];
extern unsigned char DAT_020faf98[];
extern unsigned char DAT_02108cf4[];
// FUN_0209285c @ 0x0209285c (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unregister object and destroy embedded components and base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209285c.txt.
 */
extern int FUN_0203068c(void *);extern void FUN_0203528c(void *,int),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *);void *FUN_0209285c(char *self){int id;*(unsigned int *)self=((unsigned int)DAT_020faf68 + 0u);*(unsigned int *)(self+48)=((unsigned int)DAT_020faf98 + 0u);id=FUN_0203068c(self);if(id!=-1)FUN_0203528c(*(void **)((unsigned int)DAT_02108cf4 + 0u),id);FUN_02099f10(self+72);FUN_0209a458(self+48);FUN_020303bc(self);return self;}
