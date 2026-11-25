// FUN_overlay_29__02199ba8 @ 0x02199ba8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_29__02199ba8 @ 0x02199ba8 (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Invalidate owner word +4c and module global word +4; return global pointer.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_29__02199ba8(unsigned int *self) { unsigned int *state=(unsigned int *)0x0219bd54; self[19]=~0u; state[1]=~0u; return state; }
