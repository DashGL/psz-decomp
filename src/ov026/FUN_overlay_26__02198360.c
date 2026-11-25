// FUN_overlay_26__02198360 @ 0x02198360 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_26__02198360 @ 0x02198360 (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Turn toward valid target using state-specific offset, then start animation and set state.
 * Field identities remain provisional.
 */
extern int FUN_overlay_26__021982f4(void *,void *);
extern int FUN_overlay_26__021984e0(void *);
extern void FUN_overlay_26__02198824(void *,void *,int,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_26__02198360(int *p) {int v[3];void *child=(void *)p[1];if(FUN_overlay_26__021982f4((void *)p[2],v)==1){int offset=FUN_overlay_26__021984e0(p);FUN_overlay_26__02198824(child,v,15360,offset);}FUN_02040c0c(child,0,2,4096,0);p[3]=4;}
