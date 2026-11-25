// FUN_overlay_22__0219fd14 @ 0x0219fd14 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219fd14 @ 0x0219fd14 (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Copy header, two vectors and trailing words.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;
void *FUN_overlay_22__0219fd14(unsigned int *p,const unsigned int *in) {p[0]=in[0];p[1]=in[1];*(Vec *)(p+2)=*(const Vec *)(in+2);*(Vec *)(p+5)=*(const Vec *)(in+5);p[8]=in[8];return p;}
