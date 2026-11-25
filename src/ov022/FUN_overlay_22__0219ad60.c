// FUN_overlay_22__0219ad60 @ 0x0219ad60 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ad60 @ 0x0219ad60 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Call resident operation on nested owner with two forwarded values and two zero options.
 * Field identities and high-level API contracts remain provisional.
 */
extern unsigned int FUN_020437d8(void *,unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_overlay_22__0219ad60(void **self,unsigned int a,unsigned int b) { return FUN_020437d8(((void **)self[1])[3],a,b,0,0); }
