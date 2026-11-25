// FUN_overlay_12__0212f8c0 @ 0x0212f8c0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212f8c0 @ 0x0212f8c0 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate fixed-size object and invoke one-argument constructor only on success.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_0203779c(void *);
void *FUN_overlay_12__0212f8c0(void) { void *object=FUN_020ba894(48); if(object) return FUN_0203779c(object); return object; }
