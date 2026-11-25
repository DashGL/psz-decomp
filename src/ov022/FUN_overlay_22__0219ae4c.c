// FUN_overlay_22__0219ae4c @ 0x0219ae4c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ae4c @ 0x0219ae4c (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Forward two values to five-argument operation with fixed selector and option.
 * Field identities remain provisional.
 */
extern void FUN_02037254(void *,unsigned int,void *,void *,unsigned int);
void FUN_overlay_22__0219ae4c(void **p,void *a,void *b) { FUN_02037254(p[1],27,a,b,1); }
