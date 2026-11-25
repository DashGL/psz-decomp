// FUN_overlay_28__02199f30 @ 0x02199f30 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_28__02199f30 @ 0x02199f30 (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Move child toward resolved target and advance parent when animation is absent.
 * Field identities remain provisional.
 */
extern int FUN_overlay_28__021999d8(void *,int *);
extern void FUN_overlay_28__02199420(void *,const int *,int);
extern int FUN_02040d2c(void *,int);
extern void FUN_02037924(void *);
void FUN_overlay_28__02199f30(void **p) {int v[3];void *c=p[1],*parent=p[2];if(FUN_overlay_28__021999d8(parent,v))FUN_overlay_28__02199420(c,v,40960);if(FUN_02040d2c(c,0))FUN_02037924(parent);}
