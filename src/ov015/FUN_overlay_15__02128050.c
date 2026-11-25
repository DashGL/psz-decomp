// FUN_overlay_15__02128050 @ 0x02128050 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02128050 @ 0x02128050 (code 0xa, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store incoming value in module object field; preserve incoming r0 return.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_15__02128050(unsigned int value) { char *object=*(char **)0x0213e810; *(unsigned int *)(object+0x1e298)=value; return value; }
