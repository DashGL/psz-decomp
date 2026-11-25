// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_15__02131470 @ 0x02131470 (code 0x2c, pool extent 0x2c, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Return first touched rectangle among two indexed bounds, otherwise zero.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__0213149c(int,unsigned short *);
extern int FUN_overlay_15__02136a08(const unsigned short *);
int FUN_overlay_15__02131470(void) {unsigned short rectangle[4];int i;for(i=2;i<=3;i++) {FUN_overlay_15__0213149c(i,rectangle);if(FUN_overlay_15__02136a08(rectangle))return i;}return 0;}
