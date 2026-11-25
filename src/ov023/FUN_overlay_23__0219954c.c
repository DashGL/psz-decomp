// FUN_overlay_23__0219954c @ 0x0219954c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219954c @ 0x0219954c (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Release owner slot if not sentinel then write sentinel.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,unsigned int);
void FUN_overlay_23__0219954c(unsigned int *p) { if(p[4]!=~0U) { FUN_02072724((void *)p[1],p[4]); p[4]=~0U; } }
