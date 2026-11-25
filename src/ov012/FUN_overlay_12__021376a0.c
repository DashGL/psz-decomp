// FUN_overlay_12__021376a0 @ 0x021376a0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__021376a0 @ 0x021376a0 (code 0x4c, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release display and text resources before clearing graphics buffers.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c9a0(void);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,int *);
extern void *FUN_0208f068(void);
extern void FUN_0208efd4(void *,int);
extern void FUN_020ba8ac(void *);
extern void FUN_overlay_12__02137b00(void *);
void FUN_overlay_12__021376a0(int *p) {int *h;void *m;FUN_overlay_12__0212c9a0();FUN_020c2624(FUN_020c1fc8(),p+8);p[8]=-1;h=*(int **)0x0213f330;if(h){if(h){m=FUN_0208f068();if(m)FUN_0208efd4(m,*h);*h=-1;FUN_020ba8ac(h);}*(int **)0x0213f330=0;}FUN_overlay_12__02137b00(p);}
