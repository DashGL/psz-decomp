// FUN_overlay_31__0219ab80 @ 0x0219ab80 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219ab80 @ 0x0219ab80 (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * On absent child animation set parent state two and start animation one when accepted.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
extern int FUN_overlay_31__0219bfa4(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_31__0219ab80(void **p) {void *c=p[1];if(FUN_02040d2c(c,0) && !FUN_overlay_31__0219bfa4(p[2],2))FUN_02040c0c(c,0,1,4096,0);}
