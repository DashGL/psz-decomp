// FUN_overlay_19__02198418 @ 0x02198418 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198418 @ 0x02198418 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Report any free extended child slot among forty.
 * Thumb mode confirmed by complete USA instruction stream; inventory mode heuristic is incorrect.
 */
int FUN_overlay_19__02198418(unsigned int *p) {int i;for(i=0;i<40;i++)if(!p[54+i])return 1;return 0;}
