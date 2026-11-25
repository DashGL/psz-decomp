// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020faae4[];
extern unsigned char DAT_020fab0c[];
extern unsigned char DAT_020fab24[];
// FUN_0208e8a8 @ 0x0208e8a8 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unregister manager slot, release kind and destroy embedded/base objects.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e8a8.txt.
 */
extern void *FUN_02034b78(void);extern void FUN_02035144(void *,int),FUN_020b80c0(int),FUN_020765f8(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_0208e8a8(char *self){void *p;*(unsigned int *)self=((unsigned int)DAT_020faae4 + 0u);*(unsigned int *)(self+48)=((unsigned int)DAT_020fab0c + 0u);*(unsigned int *)(self+68)=((unsigned int)DAT_020fab24 + 0u);p=FUN_02034b78();if(p)FUN_02035144(p,*(int *)(self+80));FUN_020b80c0((*(signed char **)(self+72))[2]);FUN_020765f8(self+48);FUN_020303bc(self);FUN_020ba8ac(self);return self;}
