// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_overlay_20__0219e64c @ 0x0219e64c (code 0x2e, pool extent 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize global defaults and vector, clear halfword, set sentinel.
 * Field identities remain provisional.
 */
extern char G_020ED09C[]; extern char G_020ED0A0[]; extern char G_020FC958[]; extern char G_020FC988[];
typedef struct {unsigned int x,y,z;} Vec;
void FUN_overlay_20__0219e64c(unsigned int *p) {p[0]=*(unsigned int *)G_020ED0A0;p[1]=*(unsigned int *)G_020ED09C;p[2]=*(unsigned int *)G_020FC988;*(Vec *)(p+3)=*(Vec *)G_020FC958;((unsigned short *)p)[12]=0;p[7]=~0U;}
