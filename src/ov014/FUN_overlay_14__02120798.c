// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// check: 2.0/sp2p3 full extent 0x54 exact_bytes=0 bad_relocs=0
// ROM counted-copy widths and field boundaries: notes/sessions/matching-overlays-2026-11-12-aggregate-copies.json
typedef struct {unsigned short x[8];} Copy_overlay_14__02120798_H8;
// FUN_overlay_14__02120798 @ 0x02120798 (code 0x54, pool extent 0x54, thumb)
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Copy two eight-halfword arrays and four signed bytes.
 * Field identities remain provisional.
 */
void *FUN_overlay_14__02120798(signed char *p,const signed char *in) {int i;*(Copy_overlay_14__02120798_H8 *)p=*(const Copy_overlay_14__02120798_H8 *)in;*(Copy_overlay_14__02120798_H8 *)(p+16)=*(const Copy_overlay_14__02120798_H8 *)(in+16);p[32]=in[32];p[33]=in[33];p[34]=in[34];p[35]=in[35];return p;}
