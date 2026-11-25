// FUN_overlay_12__02134000 @ 0x02134000 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134000 @ 0x02134000 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Check optional global object state.
 * Field identities remain provisional.
 */
int FUN_overlay_12__02134000(void) {unsigned int *p=*(unsigned int **)0x213f2f4;if(p)return p[16]==1;return 0;}
