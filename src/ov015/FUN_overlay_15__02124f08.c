// FUN_overlay_15__02124f08 @ 0x02124f08 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02124f08 @ 0x02124f08 (code 0xa, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Set module object flag byte; return observed object pointer.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_15__02124f08(void) { unsigned char *object=*(unsigned char **)0x0213e788; object[24]=0; return object; }
