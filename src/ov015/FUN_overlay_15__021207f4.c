// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_15__021207f4 @ 0x021207f4 (code 0x14, pool extent 0x14, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Count signed-byte string until zero.
 * Field identities remain provisional.
 */
int FUN_overlay_15__021207f4(const signed char *p) {int i=0;while(p[i])i++;return i;}
