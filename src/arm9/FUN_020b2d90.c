// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fc6c8[];
extern unsigned char DAT_020fc6ec[];
// FUN_020b2d90 @ 0x020b2d90 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor tables, unregister manager slot and destroy base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2d90.txt.
 */
extern void *FUN_02034b78(void); extern void FUN_02035144(void *,int),FUN_020b80c0(int),FUN_020303bc(void *); void *FUN_020b2d90(char *self) { void *p; *(unsigned int *)self=((unsigned int)DAT_020fc6c8 + 0u); *(unsigned int *)(self+48)=((unsigned int)DAT_020fc6ec + 0u); p=FUN_02034b78(); if(p) FUN_02035144(p,*(int *)(self+56)); FUN_020b80c0((*(signed char **)(self+52))[2]); FUN_020303bc(self); return self; }
