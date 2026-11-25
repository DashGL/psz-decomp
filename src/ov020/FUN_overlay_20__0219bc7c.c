// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// FUN_overlay_20__0219bc7c @ 0x0219bc7c (code 0x4e, pool extent 0x60, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize global defaults, vectors, halfwords and state fields.
 * Field identities remain provisional.
 */
extern char G_020ED09C[]; extern char G_020ED0A0[]; extern char G_020FC958[]; extern char G_020FC988[];
typedef struct {unsigned int x,y,z;} Vec;
void FUN_overlay_20__0219bc7c(unsigned int *p) {p[0]=*(unsigned int *)G_020ED0A0;p[1]=*(unsigned int *)G_020ED09C;p[15]=0;p[16]=0;*(Vec *)(p+3)=*(Vec *)G_020FC958;*(Vec *)(p+6)=*(Vec *)G_020FC958;((unsigned short *)p)[18]=0;((unsigned short *)p)[24]=0;p[10]=*(unsigned int *)G_020FC988;p[14]=0;p[17]=0x1000;p[11]=~0U;p[13]=1;}
