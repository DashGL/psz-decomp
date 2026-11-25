// FUN_overlay_22__0219af10 @ 0x0219af10 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219af10 @ 0x0219af10 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Look up child with forwarded incoming handle; run mode-five operation if found.
 * Field identities remain provisional.
 */
extern void *FUN_02075040(void *,unsigned int);
extern void FUN_0204b450(void *,int);
void FUN_overlay_22__0219af10(void **p,unsigned int handle) { void *child=FUN_02075040(p[1],handle); if(child) FUN_0204b450(child,5); }
