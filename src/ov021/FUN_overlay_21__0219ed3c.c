// FUN_overlay_21__0219ed3c @ 0x0219ed3c (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219ed3c @ 0x0219ed3c (code 0x42, pool extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Configure four child entries and reset timed state.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,int,int);
void FUN_overlay_21__0219ed3c(int *p) {int *child=(int *)p[1];char *entries=(char *)child[59];int i;for(i=0;i<4;i++)*(int *)(entries+i*188+24)=3;FUN_02044570(child,0,0);FUN_02044570(child,1,0);p[3]=0;p[4]=*(int *)0x020fc988;p[5]=0;}
