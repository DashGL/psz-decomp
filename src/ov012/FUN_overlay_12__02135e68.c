// FUN_overlay_12__02135e68 @ 0x02135e68 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135e68 @ 0x02135e68 (code 0xe, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Store word +84 of optional global object; preserve incoming value.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__02135e68(unsigned int value) { char *object=*(char **)0x0213f2dc; if(object) *(unsigned int *)(object+0x84)=value; return value; }
