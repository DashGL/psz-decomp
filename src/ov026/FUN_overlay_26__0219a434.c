// FUN_overlay_26__0219a434 @ 0x0219a434 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219a434 @ 0x0219a434 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and construct object with incoming owner forwarded as second constructor argument.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_26__0219a44c(void *,void *);
void *FUN_overlay_26__0219a434(void *owner) { void *p=FUN_020ba894(216); if(p)return FUN_overlay_26__0219a44c(p,owner); return p; }
