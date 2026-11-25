// FUN_overlay_21__0219da1c @ 0x0219da1c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219da1c @ 0x0219da1c (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Ensure child animation one and reset receiver counter.
 * Field identities remain provisional.
 */
extern int FUN_02040cd4(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_21__0219da1c(unsigned int *p) {void *child=(void *)p[1];if(FUN_02040cd4(child,0)!=1)FUN_02040c0c(child,0,1,4096,0);p[3]=0;}
