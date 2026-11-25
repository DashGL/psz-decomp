// FUN_overlay_22__0219ada4 @ 0x0219ada4 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ada4 @ 0x0219ada4 (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Project position to signed halfword coordinates and emit positional feedback.
 * Field identities remain provisional.
 */
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *,void *,const void *,int);
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_22__0219ada4(void *unused,int event,int mode,const void *position) {short xy[2];FUN_02090f74(xy,FUN_02090c20(),position,1);FUN_020c193c(event,mode,xy[0],xy[1],-1);}
