// FUN_overlay_22__0219ad48 @ 0x0219ad48 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ad48 @ 0x0219ad48 (code 0x12, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Compare owner word with global default.
 * Field identities remain provisional.
 */
int FUN_overlay_22__0219ad48(unsigned int *p) { return p[21]!=*(unsigned int *)0x020ed0a0; }
