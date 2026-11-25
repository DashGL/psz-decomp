// FUN_overlay_27__02199648 @ 0x02199648 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_27__02199648 @ 0x02199648 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate object and invoke checked receiver-only constructor on success.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_27__02198000(void *);
void *FUN_overlay_27__02199648(void) { void *p=FUN_020ba894(128); if(p)return FUN_overlay_27__02198000(p); return p; }
