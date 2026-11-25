// FUN_overlay_27__02198798 @ 0x02198798 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_27__02198798 @ 0x02198798 (code 0x2c, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation seven, reset child track vector and initialize receiver timer.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_02043f30(void *,int,const void *);
void FUN_overlay_27__02198798(unsigned int *p) {void *child=(void *)p[1];FUN_02040c0c(child,0,7,4096,0);FUN_02043f30(child,0,(void *)0x020fc958);p[4]=*(unsigned int *)0x020fc988;p[3]=0;}
