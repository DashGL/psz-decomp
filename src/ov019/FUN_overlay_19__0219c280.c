// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_19__0219c280 @ 0x0219c280
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Select animation and shared timer according to parent mode.
 * Field identities remain provisional.
 */
extern unsigned int data_0219d468[];
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_19__0219c280(unsigned int *p) {unsigned int *parent=(unsigned int *)p[2];void *child=(void *)p[1];int anim=7;p[3]=data_0219d468[1];p[4]=parent[36];if(p[4]==1){p[3]=*data_0219d468;anim=6;}FUN_02040c0c(child,0,anim,4096,0);}
