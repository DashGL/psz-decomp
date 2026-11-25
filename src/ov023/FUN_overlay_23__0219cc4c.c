// FUN_overlay_23__0219cc4c @ 0x0219cc4c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219cc4c @ 0x0219cc4c (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Apply owner mode then reset local state.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_23__0219cc4c(unsigned int *p) { FUN_02040c0c((void *)p[1],0,6,0x1000,0);p[3]=0;p[4]=3; }
