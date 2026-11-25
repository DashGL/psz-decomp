// FUN_overlay_22__0219f550 @ 0x0219f550 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f550 @ 0x0219f550 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Forward three embedded record slices to optional owned child.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__021a0698(void *,void *,void *,void *);
void FUN_overlay_22__0219f550(void **p,char *record) { if(p[4])FUN_overlay_22__021a0698(p[4],record+12,record+16,record+20); }
