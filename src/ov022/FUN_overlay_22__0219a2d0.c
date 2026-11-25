// FUN_overlay_22__0219a2d0 @ 0x0219a2d0 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a2d0 @ 0x0219a2d0 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Check two coordinates against type-dependent symmetric bounds.
 * Field identities remain provisional.
 */
extern int FUN_overlay_22__0219a5b8(void *);
int FUN_overlay_22__0219a2d0(void *p,int x,int y) {int bound=0;switch(FUN_overlay_22__0219a5b8(p)){case 63:bound=61440;break;case 65:bound=61440;break;}if(x< -bound||x>bound||y< -bound||y>bound)return 0;return 1;}
