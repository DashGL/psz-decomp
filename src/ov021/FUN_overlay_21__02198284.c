// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_overlay_21__02198284 @ 0x02198284 (code 0x3c, pool extent 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Reset three default vectors and trailing sentinel/state words.
 * Field identities remain provisional.
 */
extern char G_020FC958[];
typedef struct {unsigned int x,y,z;} Vec;
void FUN_overlay_21__02198284(unsigned int *p) {*(Vec *)p=*(Vec *)G_020FC958;*(Vec *)(p+3)=*(Vec *)G_020FC958;*(Vec *)(p+6)=*(Vec *)G_020FC958;p[9]=~0U;p[10]=~0U;p[11]=0;p[12]=0;}
