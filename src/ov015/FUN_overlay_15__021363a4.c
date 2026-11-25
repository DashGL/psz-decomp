// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// FUN_overlay_15__021363a4 @ 0x021363a4 (code 0x1e, pool extent 0x1e, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Build halfword rectangle from origin and extent.
 * Field identities remain provisional.
 */
void FUN_overlay_15__021363a4(const unsigned short *a,const unsigned short *b,unsigned short *out) {out[0]=a[0];out[1]=a[1];out[2]=a[0]+b[0];out[3]=a[1]+b[1];}
