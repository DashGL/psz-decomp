// FUN_overlay_22__021a05d4 @ 0x021a05d4 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a05d4 @ 0x021a05d4 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Clamp two signed-byte coordinates to type-dependent signed-byte bounds.
 * Field identities remain provisional.
 */
extern int FUN_overlay_22__021a0584(void *);
void FUN_overlay_22__021a05d4(void *p,signed char *x,signed char *y) {signed char hi=(signed char)FUN_overlay_22__021a0584(p),lo=(signed char)-hi;if(*x<lo)*x=lo;else if(*x>hi)*x=hi;if(*y<lo)*y=lo;else if(*y>hi)*y=hi;}
