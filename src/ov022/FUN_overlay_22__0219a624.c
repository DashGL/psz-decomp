// FUN_overlay_22__0219a624 @ 0x0219a624 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a624 @ 0x0219a624 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Sum absolute coordinate differences.
 * Field identities remain provisional.
 */
int FUN_overlay_22__0219a624(int x,int y,int a,int b) { int dx=a-x,dy=b-y; if(dx<0)dx=-dx; if(dy<0)dy=-dy; return dx+dy; }
