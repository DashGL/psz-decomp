// FUN_overlay_15__02130fe0 @ 0x02130fe0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02130fe0 @ 0x02130fe0 (code 0xc, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Set byte +604 in module global object; observed return register holds offset 604.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_15__02130fe0(void) { char *object=*(char **)0x0213e8b0; object[0x604]=1; return 0x604; }
