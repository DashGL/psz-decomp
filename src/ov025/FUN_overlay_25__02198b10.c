// FUN_overlay_25__02198b10 @ 0x02198b10 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198b10 @ 0x02198b10 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Turn toward target position, advance state on timeout, and accumulate timer.
 * Field identities remain provisional.
 */
extern int FUN_overlay_25__021992c4(void *,void *);
extern unsigned int FUN_overlay_25__02198d6c(void *,void *);
extern void FUN_02037924(void *);
extern int FUN_02036c34(void *);
void FUN_overlay_25__02198b10(int *p) {int v[3];void *parent=(void *)p[2],*child=(void *)p[1];if(FUN_overlay_25__021992c4(parent,v))FUN_overlay_25__02198d6c(child,v);if(p[4]>p[3])FUN_02037924(parent);p[4]+=FUN_02036c34(child);}
