// FUN_overlay_22__0219a02c @ 0x0219a02c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a02c @ 0x0219a02c (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch, destroy optional child then release object storage; preserve returned address.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219ab20(void *),FUN_020ba8ac(void *);
void *FUN_overlay_22__0219a02c(unsigned int *p) { p[0]=0x021a11f4; FUN_overlay_22__0219ab20(p); FUN_020ba8ac(p); return p; }
