// FUN_overlay_12__021367f4 @ 0x021367f4 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__021367f4 @ 0x021367f4 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Convert two-argument lookup result to boolean; both incoming r0/r1 are live.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_overlay_12__02132020(unsigned int,void *);
int FUN_overlay_12__021367f4(unsigned int key,void *owner) { return FUN_overlay_12__02132020(key,owner)!=0; }
