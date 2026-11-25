// FUN_overlay_15__02124ec4 @ 0x02124ec4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02124ec4 @ 0x02124ec4 (code 0x12, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Set signed-byte field +16 only while it holds -1; preserve input value return.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_15__02124ec4(unsigned int value) { signed char *object=*(signed char **)0x0213e788; if(object[22]==-1) object[22]=value; return value; }
