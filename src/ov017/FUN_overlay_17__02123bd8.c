// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_overlay_17__02123bd8 @ 0x02123bd8, verified extent 0x40.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02125d10[];
extern unsigned char DAT_02125d24[];
// FUN_overlay_17__02123bd8 @ 0x02123bd8 (inventory code 0x34, true extent 0x40, thumb)
// flags: -O4,s
/* USA overlay17 ROM reconstruction, 2026-11-05.
 * Game controller reset, cleanup or complete state dispatcher.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch358.md.
 * Full CFG extent used even where inventory truncates a switch.
 */
extern void FUN_020ba8c4(void *);extern void FUN_overlay_17__0212412c(void *);extern void FUN_overlay_17__021240a8(void *);
void * FUN_overlay_17__02123bd8(char *self) { *(int *)self=((unsigned int)DAT_02125d10 + 0u);*(int *)(self+0xd0)=((unsigned int)DAT_02125d24 + 0u);if(*(void **)(self+0x9d14)){FUN_020ba8c4(*(void **)(self+0x9d14));*(void **)(self+0x9d14)=0;}FUN_overlay_17__0212412c(self+0xd0);FUN_overlay_17__021240a8(self);return self; }
