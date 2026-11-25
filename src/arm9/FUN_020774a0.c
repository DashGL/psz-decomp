// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa1dc[];
extern unsigned char DAT_020fa204[];
// FUN_020774a0 @ 0x020774a0 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release resource, destroy embedded/base objects and free self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020774a0.txt.
 */
extern void FUN_020472bc(void *),FUN_020765f8(void *),FUN_020303bc(void *),FUN_020ba8ac(void *); void *FUN_020774a0(char *self) { void *p; *(unsigned int *)self=((unsigned int)DAT_020fa1dc + 0u); *(unsigned int *)(self+48)=((unsigned int)DAT_020fa204 + 0u); p=*(void **)(self+72); if(p) { FUN_020472bc(p); *(void **)(self+72)=0; } FUN_020765f8(self+48); FUN_020303bc(self); FUN_020ba8ac(self); return self; }
