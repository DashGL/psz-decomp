// FUN_overlay_15__02125a3c @ 0x02125a3c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02125a3c @ 0x02125a3c (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read unsigned byte +11c from module global object.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_15__02125a3c(void) { char *object=*(char **)0x0213e7dc; return *(unsigned char *)(object+0x11c); }
