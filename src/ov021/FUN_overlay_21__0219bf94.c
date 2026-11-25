// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_overlay_21__0219bf94 @ 0x0219bf94 (code 0x3c, pool extent 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Construct state node, initialize handles and copy two default vectors.
 * Field identities remain provisional.
 */
extern char G_020FC958[];
typedef struct {int a,b,c;} V;
extern void *FUN_overlay_21__0219b6c4(void *,void *,void *);
int *FUN_overlay_21__0219bf94(int *p,void *a,void *b) {FUN_overlay_21__0219b6c4(p,a,b);p[0]=0x021a1478;p[3]=-1;p[4]=-1;p[5]=-1;p[6]=-1;*(V *)(p+7)=*(V *)G_020FC958;*(V *)(p+10)=*(V *)G_020FC958;p[13]=0;return p;}
