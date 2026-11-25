// FUN_overlay_23__0219b764 @ 0x0219b764 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219b764 @ 0x0219b764 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Ensure child animation one is selected.
 * Field identities remain provisional.
 */
extern int FUN_02040cd4(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_23__0219b764(void **p) {void *child=p[1];if(FUN_02040cd4(child,0)!=1)FUN_02040c0c(child,0,1,4096,0);}
