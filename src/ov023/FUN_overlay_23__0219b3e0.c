// FUN_overlay_23__0219b3e0 @ 0x0219b3e0 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219b3e0 @ 0x0219b3e0 (code 0xa, pool extent 0xa, thumb)
// check: vers=2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Subtract input words into output.
 * Field identities remain provisional.
 */
void *FUN_overlay_23__0219b3e0(unsigned int *out,const unsigned int *a,const unsigned int *b) {*out=*a-*b;return out;}
