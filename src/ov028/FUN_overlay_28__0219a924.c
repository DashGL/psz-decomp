// FUN_overlay_28__0219a924 @ 0x0219a924 (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a924 @ 0x0219a924 (code 0x62, pool extent 0x62, thumb)
// check: vers=2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize randomized child mode and conditionally start selected animation.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02037208(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_28__0219a924(int *p) {int *c=(int *)p[1];int animation=1;p[4]=1;p[5]=0;p[6]=0;if(c[53]==1){animation=2;p[4]=FUN_02037208(c,5)==0;p[6]=FUN_02037208(c,20)+30;}if(p[4]==1||p[3]==0)FUN_02040c0c(c,0,animation,4096,0);p[3]=1;}
