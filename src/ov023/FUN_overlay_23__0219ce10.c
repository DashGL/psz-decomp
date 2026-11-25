// FUN_overlay_23__0219ce10 @ 0x0219ce10 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219ce10 @ 0x0219ce10 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Release owner handle then restore default global handle.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,unsigned int);
void FUN_overlay_23__0219ce10(unsigned int *p) { FUN_02075068((void *)p[1],p[3]); p[3]=*(unsigned int *)0x020ed09c; }
