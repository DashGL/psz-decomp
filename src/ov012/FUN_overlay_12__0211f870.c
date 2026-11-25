// FUN_overlay_12__0211f870 @ 0x0211f870 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211f870 @ 0x0211f870 (code 0xa, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Store dimensions and selection then clamp selection and viewport.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__0211f870(int *p,int count,int visible,int selected) {p[2]=selected;p[0]=count;p[1]=visible;FUN_overlay_12__0211f880(p);}
