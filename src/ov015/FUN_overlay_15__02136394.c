// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// FUN_overlay_15__02136394 @ 0x02136394 (code 0x10, pool extent 0x10, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Pack four arguments as output halfwords.
 * Field identities remain provisional.
 */
void FUN_overlay_15__02136394(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned short *out) {out[0]=a;out[1]=b;out[2]=c;out[3]=d;}
