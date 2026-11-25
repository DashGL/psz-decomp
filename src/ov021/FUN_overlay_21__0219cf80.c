// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_overlay_21__0219cf80 @ 0x0219cf80 (code 0x4e, pool extent 0x54, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Snapshot parent choices and reset state vectors before animation.
 * Field identities remain provisional.
 */
extern char G_020FC958[];
typedef struct {int v[3];} Vec;
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_21__0219cf80(int *p) {int *parent=(int *)p[2],*child=(int *)p[1];p[4]=parent[10];p[5]=parent[2];p[7]=-1;p[6]=-1;*(Vec *)(p+8)=*(Vec *)G_020FC958;*(Vec *)(p+11)=*(Vec *)G_020FC958;p[3]=0;FUN_02040c0c(child,p[4],55,4096,0);p[14]=0;}
