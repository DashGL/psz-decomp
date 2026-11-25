// FUN_overlay_12__021228d4 @ 0x021228d4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__021228d4 @ 0x021228d4 (code 0x12, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Compare module state words +8 and zero.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_12__021228d4(void) { unsigned int *state=(unsigned int *)0x0213ec9c; return state[2]==state[0]; }
