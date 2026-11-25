// FUN_overlay_23__0219847c @ 0x0219847c (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219847c @ 0x0219847c (code 0x66, pool extent 0x6c, thumb)
// check: vers=2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Disable child display flags and start positioned effect with reset timer.
 * Field identities remain provisional.
 */
extern int FUN_02074e9c(void *,int,int,int);
extern void *FUN_02075040(void *,int);
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02044570(void *,int,int);
extern void FUN_020445a8(void *,int,int);
void FUN_overlay_23__0219847c(int *p) {int *c=(int *)p[1],*effect;struct V {int x,y,z;};FUN_02043ea4(c,0,0);FUN_02044570(c,0,0);FUN_020445a8(c,0,0);effect=(int *)FUN_02075040(c,FUN_02074e9c(c,1,0,0));if(effect){*(struct V *)(effect+23)=*(struct V *)(c+14);effect[57]|=65536;}p[4]=*(int *)0x020fc988;p[3]=0;}
