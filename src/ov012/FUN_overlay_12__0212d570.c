// FUN_overlay_12__0212d570 @ 0x0212d570 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d570 @ 0x0212d570 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Compute signed completion percentage with zero-denominator guard and upper clamp.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212d598(void *,int,int);
void FUN_overlay_12__0212d570(void *p,int total,int current,int style) {int percent;if(total==0)percent=0;else percent=current*100/total;if(percent>100)percent=100;FUN_overlay_12__0212d598(p,percent,style);}
