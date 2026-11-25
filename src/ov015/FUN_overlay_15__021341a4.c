// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { unsigned char pad_0[4]; char * field_4; } DAT_0213e8e0;
// FUN_overlay_15__021341a4 @ 0x021341a4 (code 0x34, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay15 ROM reconstruction, 2026-11-05.
 * Poll asynchronous status and transition game controller state.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch359.md.
 */
extern void FUN_overlay_15__02133d2c(int);extern void FUN_overlay_15__02133d7c(int);extern int FUN_02055594(void *);
int FUN_overlay_15__021341a4(void) { int code;char *state=DAT_0213e8e0.field_4;if(*(int *)(state+0x40)!=6)return 0;FUN_overlay_15__02133d2c(3);code=FUN_02055594(DAT_0213e8e0.field_4+0x1e00);if(code!=2){FUN_overlay_15__02133d7c(code);return 0;}return 1; }
