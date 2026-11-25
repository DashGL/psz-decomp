// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets.
// FUN_02080b24 @ 0x02080b24 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unregister active object, free buffer and clear length.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080b24.txt.
 */
extern void FUN_020ba494(void *),FUN_020ba8c4(void *); void FUN_02080b24(char *self) { if(*(unsigned char *)(self+21)) { FUN_020ba494(self); self[21]=0; } if(*(void **)self) { FUN_020ba8c4(*(void **)self); *(void **)self=0; } *(unsigned int *)(self+4)=0; }
