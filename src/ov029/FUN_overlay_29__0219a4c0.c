// FUN_overlay_29__0219a4c0 @ 0x0219a4c0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a4c0 @ 0x0219a4c0 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate object and forward both incoming parameters to base-derived constructor.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_29__0219a52c(void *,unsigned int,unsigned int);
void *FUN_overlay_29__0219a4c0(unsigned int a,unsigned int b) { void *p=FUN_020ba894(324); if(p)return FUN_overlay_29__0219a52c(p,a,b); return p; }
