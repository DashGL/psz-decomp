// FUN_overlay_12__02137564 @ 0x02137564 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__02137564 @ 0x02137564 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Map owner byte +13c to one when nonzero, otherwise three.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_12__02137564(char *self) { if(*(unsigned char *)(self+0x13c)==0) return 3; return 1; }
