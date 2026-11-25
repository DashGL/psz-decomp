// FUN_overlay_22__0219a410 @ 0x0219a410 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a410 @ 0x0219a410 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Return absolute value of difference truncated to signed sixteen bits.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_22__0219a410(unsigned int a,unsigned int b) { int difference=(short)(b-a); if(difference<0) difference=-difference; return difference; }
