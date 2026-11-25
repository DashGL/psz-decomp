// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa1a0[];
extern unsigned char DAT_020fa1c4[];
// FUN_02077080 @ 0x02077080 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy owned and embedded objects then base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077080.txt.
 */
extern void FUN_020306fc(void *),FUN_020ba8ac(void *),FUN_020765f8(void *),FUN_020303bc(void *); void *FUN_02077080(char *self) { void *p; *(unsigned int *)self=((unsigned int)DAT_020fa1a0 + 0u); *(unsigned int *)(self+48)=((unsigned int)DAT_020fa1c4 + 0u); p=*(void **)(self+72); if(p) { if(p) { FUN_020306fc(p); FUN_020ba8ac(p); } *(void **)(self+72)=0; } FUN_020306fc(self+88); FUN_020765f8(self+48); FUN_020303bc(self); return self; }
