// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_15__021345c8 @ 0x021345c8, verified extent 0x34.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e8e0[];
// FUN_overlay_15__021345c8 @ 0x021345c8 (code 0x2c, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay15 ROM reconstruction, 2026-11-05.
 * Poll asynchronous status and transition game controller state.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch359.md.
 */
extern void FUN_overlay_15__02133d2c(int);extern void FUN_overlay_15__02133d7c(int);extern void FUN_overlay_15__021345fc(void *);extern int FUN_02053d14(void *,void (*)(void *),int);
int FUN_overlay_15__021345c8(void) { int code;FUN_overlay_15__02133d2c(3);code=FUN_02053d14(*(char **)((unsigned int)DAT_0213e8e0 + 4u)+0x80,FUN_overlay_15__021345fc,2);if(code!=2){FUN_overlay_15__02133d7c(code);FUN_overlay_15__02133d2c(10);return 0;}return 1; }
