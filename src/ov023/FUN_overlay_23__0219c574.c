// FUN_overlay_23__0219c574 @ 0x0219c574 (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219c574 @ 0x0219c574 (code 0x4e, pool extent 0x4e, thumb)
// check: vers=2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Free nested owned buffers and then their descriptor array.
 * Field identities remain provisional.
 */
extern void FUN_020ba8b4(void *);
void FUN_overlay_23__0219c574(int *p) {int i;void **a;if(p[57]){for(i=0;i<p[58];i++){a=(void **)p[57];if(a[i*2]){FUN_020ba8b4(a[i*2]);((void **)p[57])[i*2]=0;}}if(p[57]){FUN_020ba8b4((void *)p[57]);p[57]=0;}}}
