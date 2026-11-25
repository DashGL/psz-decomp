// FUN_overlay_22__0219f700 @ 0x0219f700 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f700 @ 0x0219f700 (code 0x32, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize receiver and register with optional shared manager.
 * Field identities remain provisional.
 */
extern void FUN_02035408(void *,int,int,int);
extern int FUN_overlay_22__0219f628(void *,void *);
int *FUN_overlay_22__0219f700(int *p) {void *m;p[0]=0x021a1698;p[1]=0;FUN_02035408(p+2,0,0,0);p[5]=-1;m=*(void **)0x021a1798;if(m)p[5]=FUN_overlay_22__0219f628(m,p);return p;}
