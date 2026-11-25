// FUN_overlay_20__02198f28 @ 0x02198f28 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198f28 @ 0x02198f28 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Return nested optional child word +28.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_20__02198f28(char *self) { void **child=*(void ***)(self+0xd4); unsigned int *nested=child[1]; if(nested) return nested[10]; return 0; }
