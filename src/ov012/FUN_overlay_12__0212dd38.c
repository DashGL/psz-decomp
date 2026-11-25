// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
extern struct { int * field_0; } DAT_0213f2d0;
// FUN_overlay_12__0212dd38 @ 0x0212dd38 (code 0x36, pool extent 0x40, thumb)
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Singleton construction or controller cleanup in observed order.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch357.md.
 * Field identities remain provisional.
 */
extern void FUN_020b9e9c(void *);extern void FUN_overlay_12__0212c9a0(void);extern void FUN_overlay_12__0212e01c(void *);extern void *FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
void * FUN_overlay_12__0212dd38(int *self) { self[0]=0x0213e288;FUN_020b9e9c(self);FUN_overlay_12__0212c9a0();self[26]=0;FUN_overlay_12__0212e01c(self);if(DAT_0213f2d0.field_0==self)DAT_0213f2d0.field_0=0;FUN_overlay_12__02131dd4(self);FUN_020ba940(self);return self; }
