// FUN_overlay_31__0219a914 @ 0x0219a914 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a914 @ 0x0219a914 (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Validate two signed-byte coordinates then encode five-column index.
 * Field identities remain provisional.
 */
int FUN_overlay_31__0219a914(void *unused,const signed char *a,const signed char *b) {int x=a[0],y;if(x<0 || x>=5)return -1;y=b[0];if(y<0 || y>=5)return -1;return (signed char)(y*5+x);}
