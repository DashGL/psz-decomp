// FUN_overlay_22__02198778 @ 0x02198778 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__02198778 @ 0x02198778 (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Map two signed fixed-point coordinates into clamped three-by-three grid.
 * Field identities remain provisional.
 */
int FUN_overlay_22__02198778(int x,int y) {int a=(x+61440)/40960,b=(y+61440)/40960;if(a<0)a=0;else if(a>2)a=2;if(b<0)b=0;else if(b>2)b=2;return a+b*3;}
