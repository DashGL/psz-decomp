// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// check: 2.0/sp2p3 full extent 0x1e exact_bytes=0 bad_relocs=0
// ROM counted-copy widths and field boundaries: notes/sessions/matching-overlays-2026-11-12-aggregate-copies-batch3.json
typedef struct {unsigned short h[9];} Copy_02120fb4;
// FUN_overlay_10__02120fb4 @ 0x02120fb4 (code 0x1e, pool extent 0x1e, thumb)
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Copy ten halfwords then clear ninth.
 * Field identities remain provisional.
 */
void *FUN_overlay_10__02120fb4(unsigned short *p,const unsigned short *record) {unsigned short *out=p;const unsigned short *in=record;int i=9;*(Copy_02120fb4 *)p=*(const Copy_02120fb4 *)record;p[9]=record[9];p[8]=0;return p;}
