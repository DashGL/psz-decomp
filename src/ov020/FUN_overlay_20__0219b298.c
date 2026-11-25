// FUN_overlay_20__0219b298 @ 0x0219b298 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219b298 @ 0x0219b298 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Release owner slot then restore default global slot.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,int);
void FUN_overlay_20__0219b298(unsigned int *p) { FUN_02072724((void *)p[1],p[14]); p[14]=*(unsigned int *)0x020ed0a0; }
