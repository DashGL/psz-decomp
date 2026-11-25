// FUN_overlay_15__0211e650 @ 0x0211e650 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__0211e650 @ 0x0211e650 (code 0xa, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * ABI: registration02120974 installs allocator/free adapters02127a54/02127a60.
 * Allocator consumes byte count and returns pointer; free consumes pointer, result unused.
 * Field identities and high-level API contracts remain provisional.
 */
void FUN_overlay_15__0211e650(void *arg) { void (*callback)(void *)=*(void (**)(void *))0x0213d0ac; callback(arg); }
