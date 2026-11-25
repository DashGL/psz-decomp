// FUN_overlay_22__0219af24 @ 0x0219af24 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219af24 @ 0x0219af24 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Set or clear selected bit on resolved child handle.
 * Field identities remain provisional.
 */
extern unsigned int *FUN_02075040(void *,int);
void FUN_overlay_22__0219af24(void **p,int handle,int bit,int enable) {unsigned int *c=FUN_02075040(p[1],handle);if(c){if(enable)c[57]|=1u<<bit;else c[57]&=~(1u<<bit);}}
