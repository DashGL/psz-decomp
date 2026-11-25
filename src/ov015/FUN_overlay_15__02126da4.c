// FUN_overlay_15__02126da4 @ 0x02126da4 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02126da4 @ 0x02126da4 (code 0xa, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store incoming value in module object field; preserve incoming r0 return.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_15__02126da4(unsigned int value) { char *object=*(char **)0x0213e7e0; *(unsigned char *)(object+0x68)=value; return value; }
