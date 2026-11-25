// FUN_overlay_28__02198f98 @ 0x02198f98 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_28__02198f98 @ 0x02198f98 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve target position, advance parent on failure, start animation two and clear timer.
 * Field identities remain provisional.
 */
extern int FUN_overlay_28__02198c10(void *,void *);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_28__02198f98(unsigned int *p) {if(!FUN_overlay_28__02198c10((void *)p[2],p+3))FUN_02037924((void *)p[2]);FUN_02040c0c((void *)p[1],0,2,4096,0);p[6]=0;}
