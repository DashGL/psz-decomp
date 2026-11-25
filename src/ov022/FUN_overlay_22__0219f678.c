// FUN_overlay_22__0219f678 @ 0x0219f678 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f678 @ 0x0219f678 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Report any free child slot among twenty.
 * Thumb mode confirmed by complete USA instruction stream; inventory mode heuristic is incorrect.
 */
int FUN_overlay_22__0219f678(unsigned int *p) {int i;for(i=0;i<20;i++)if(!p[i])return 1;return 0;}
