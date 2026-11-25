// FUN_overlay_12__0213c180 @ 0x0213c180 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch59.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213c180 @ 0x0213c180 (code 0x14, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Construct four eight-byte elements at module address with constructor and null destructor.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__021228bc(void *);
extern void FUN_0200c394(void *,unsigned int,unsigned int,void (*)(void *),void (*)(void *));
void FUN_overlay_12__0213c180(void) { FUN_0200c394((void *)0x0213ecb4,4,8,FUN_overlay_12__021228bc,0); }
