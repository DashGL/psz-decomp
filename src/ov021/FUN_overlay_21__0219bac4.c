// FUN_overlay_21__0219bac4 @ 0x0219bac4 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219bac4 @ 0x0219bac4 (code 0x3e, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Release child handles, destroy empty base and free receiver.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,int);
extern void FUN_02075068(void *,int);
extern void FUN_overlay_21__0219b6e4(void *);
extern void FUN_020ba8ac(void *);
int *FUN_overlay_21__0219bac4(int *p) {int sentinel;void *child;p[0]=0x021a1440;sentinel=*(int *)0x020ed0a0;child=(void *)p[1];if(p[9]!=sentinel){FUN_02072724(child,p[9]);p[9]=sentinel;}sentinel=*(int *)0x020ed09c;if(p[10]!=sentinel){FUN_02075068(child,p[10]);p[10]=sentinel;}FUN_overlay_21__0219b6e4(p);FUN_020ba8ac(p);return p;}
