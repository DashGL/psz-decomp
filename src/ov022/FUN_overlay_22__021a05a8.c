// FUN_overlay_22__021a05a8 @ 0x021a05a8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a05a8 @ 0x021a05a8 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Generate two independent signed-byte offsets within actor-dependent radius.
 * Field identities remain provisional.
 */
extern int FUN_overlay_22__021a0584(void *);
extern unsigned int FUN_02035b60(unsigned int);
int FUN_overlay_22__021a05a8(void *p,signed char *x,signed char *y) {int radius=FUN_overlay_22__021a0584(p);int width=radius*2;unsigned int a=FUN_02035b60(width+1);unsigned int b=FUN_02035b60(width+1);*x=a-radius;*y=b-radius;return 1;}
