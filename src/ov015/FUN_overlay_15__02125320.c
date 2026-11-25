// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_15__02125320 @ 0x02125320 (code 0x2c, pool extent 0x2c, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read current display mode and dispatch indexed setup or update.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02127dfc(int *,int *);
extern void FUN_overlay_15__021321f0(int);
extern void FUN_overlay_15__0213257c(int);
void FUN_overlay_15__02125320(int index) {int mode;FUN_overlay_15__02127dfc(&mode,0);if(mode==1)FUN_overlay_15__021321f0(index);else if(mode==2)FUN_overlay_15__0213257c(index);}
