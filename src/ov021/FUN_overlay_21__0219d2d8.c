// FUN_overlay_21__0219d2d8 @ 0x0219d2d8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219d2d8 @ 0x0219d2d8 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Enable parent-selected component and start animation thirty-four.
 * Field identities remain provisional.
 */
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_21__0219d2d8(unsigned int *p) {void *child=(void *)p[1];p[4]=((unsigned int *)p[2])[10];p[5]=0;p[3]=0;FUN_02043ea4(child,p[4],1);FUN_02040c0c(child,p[4],34,4096,0);}
