// FUN_overlay_11__021212e8 @ 0x021212e8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_11__021212e8 @ 0x021212e8 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate fixed-size object and invoke one-argument constructor only on success.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_11__021232cc(void *);
void *FUN_overlay_11__021212e8(void) { void *object=FUN_020ba894(12); if(object) return FUN_overlay_11__021232cc(object); return object; }
