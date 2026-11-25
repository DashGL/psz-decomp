// FUN_overlay_21__0219ba80 @ 0x0219ba80 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219ba80 @ 0x0219ba80 (code 0x38, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Reset dispatch table, release two valid child handles and destroy base.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,int);
extern void FUN_02075068(void *,int);
extern void FUN_overlay_21__0219b6e4(void *);
int *FUN_overlay_21__0219ba80(int *p) {int sentinel;void *child;p[0]=0x021a1440;sentinel=*(int *)0x020ed0a0;child=(void *)p[1];if(p[9]!=sentinel){FUN_02072724(child,p[9]);p[9]=sentinel;}sentinel=*(int *)0x020ed09c;if(p[10]!=sentinel){FUN_02075068(child,p[10]);p[10]=sentinel;}FUN_overlay_21__0219b6e4(p);return p;}
