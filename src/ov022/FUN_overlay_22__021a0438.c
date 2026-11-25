// FUN_overlay_22__021a0438 @ 0x021a0438 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0438 @ 0x021a0438 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Set owner flag and succeed when nonzero state equals expected state.
 * Field identities remain provisional.
 */
int FUN_overlay_22__021a0438(unsigned int *p) { if(p[2] && p[2]==p[27]) { p[18]=1; return 1; } return 0; }
