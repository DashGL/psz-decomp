// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa1dc[];
extern unsigned char DAT_020fa204[];
// FUN_0207746c @ 0x0207746c (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset both tables, release optional child and run embedded/base cleanup.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207746c.txt.
 */
extern void FUN_020472bc(void *),FUN_020765f8(void *),FUN_020303bc(void *); void *FUN_0207746c(unsigned int *self) { self[0]=((unsigned int)DAT_020fa1dc + 0u); self[12]=((unsigned int)DAT_020fa204 + 0u); if(self[18]) { FUN_020472bc((void *)self[18]); self[18]=0; } FUN_020765f8(self+12); FUN_020303bc(self); return self; }
