// FUN_overlay_22__02197fe8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_22__02197fe8 @ 0x02197fe8 (code 0x16, pool extent 0x16, thumb)
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize eight-byte record with sentinel in second byte.
 * Field identities remain provisional.
 */
void *FUN_overlay_22__02197fe8(signed char *p) { p[0]=0; p[1]=-1; p[2]=0; p[3]=0; p[4]=0; p[5]=0; p[6]=0; p[7]=0; return p; }
