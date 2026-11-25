// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4e, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x4e exact_bytes=0 bad_relocs=0
// Observed arguments: notes/sessions/matching-resume2-overlays-2026-11-12-receivers-wide.json
// FUN_overlay_21__0219da90 @ 0x0219da90 (code 0x4e, pool extent 0x4e, thumb)
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation and derive mode from global selector and child state.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern int FUN_02037578(void *);
void FUN_overlay_21__0219da90(int *p) {int *c=(int *)p[1];int mode;FUN_02040c0c(c,0,8,4096,0);p[3]=0;p[4]=0;p[5]=0;mode=FUN_02037578(c);if(!mode||c[53]==1)p[6]=0;else if(mode==1)p[6]=1;else if(mode==2)p[6]=2;else p[6]=0;}
