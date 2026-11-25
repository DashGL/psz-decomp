// FUN_overlay_28__0219a88c @ 0x0219a88c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a88c @ 0x0219a88c (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Disable two components, start animation seven and clear timer.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,int,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_28__0219a88c(unsigned int *p) {void *c=(void *)p[1];FUN_02044570(c,0,0);FUN_02044570(c,1,0);FUN_02040c0c(c,0,7,4096,0);p[3]=0;}
