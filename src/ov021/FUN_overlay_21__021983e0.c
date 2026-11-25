// FUN_overlay_21__021983e0 @ 0x021983e0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_21__021983e0 @ 0x021983e0 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate object and invoke checked receiver-only constructor on success.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_21__021997a8(void *);
void *FUN_overlay_21__021983e0(void) { void *p=FUN_020ba894(276); if(p)return FUN_overlay_21__021997a8(p); return p; }
