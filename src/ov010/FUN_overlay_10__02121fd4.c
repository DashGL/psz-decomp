// FUN_overlay_10__02121fd4 @ 0x02121fd4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__02121fd4 @ 0x02121fd4 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate twenty-byte object and construct with zero/-1 parameters.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_10__02120c78(void *,int,int);
void *FUN_overlay_10__02121fd4(void) { void *object=FUN_020ba894(20); if(object) return FUN_overlay_10__02120c78(object,0,-1); return object; }
