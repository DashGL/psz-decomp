// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_overlay_19__0219c420 @ 0x0219c420
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation and initialize timed state with bounded parent choice.
 * Field identities remain provisional.
 */
extern int data_0219d494[];
extern int data_020fc988[];
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_19__0219c420(int *p) {int *c=(int *)p[1];signed char *q=(signed char *)p[2];FUN_02040c0c(c,0,3,4096,0);p[3]=c[15];p[4]=*(data_0219d494+5);p[5]=*data_020fc988;*(short *)(p+6)=0;p[7]=0;p[8]=q[102];if(p[8]<0||p[8]>=5)p[8]=0;}
