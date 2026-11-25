// FUN_overlay_25__0219894c @ 0x0219894c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_25__0219894c @ 0x0219894c (code 0x28, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation zero, disable component and copy shared timer.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_020445a8(void *,int,int);
void FUN_overlay_25__0219894c(unsigned int *p) {void *child=(void *)p[1];FUN_02040c0c(child,0,0,4096,0);FUN_020445a8(child,0,0);p[3]=*(unsigned int *)0x0219ac74;}
