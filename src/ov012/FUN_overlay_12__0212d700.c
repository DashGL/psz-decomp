// FUN_overlay_12__0212d700 @ 0x0212d700 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d700 @ 0x0212d700 (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Store word +40 when global object exists; preserve value in return register.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__0212d700(unsigned int value) { unsigned int *object=*(unsigned int **)0x0213ec94; if(object) object[16]=value; return value; }
