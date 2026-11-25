// FUN_overlay_12__021344e4 @ 0x021344e4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021344e4 @ 0x021344e4 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Read optional global object third word.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_12__021344e4(void) {unsigned int *p=*(unsigned int **)0x0213f2f8;if(p)return p[2];return 0;}
