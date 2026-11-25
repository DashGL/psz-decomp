// FUN_overlay_12__021341a8 @ 0x021341a8 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__021341a8 @ 0x021341a8 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Accept signed values 1 through 99, otherwise return zero.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_12__021341a8(int value) { if(value<=0 || value>99) return 0; return value; }
