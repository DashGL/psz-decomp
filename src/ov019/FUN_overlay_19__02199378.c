// FUN_overlay_19__02199378 @ 0x02199378 (0x52, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__02199378 @ 0x02199378 (code 0x52, pool extent 0x52, thumb)
// check: vers=2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Copy header, three vectors and six trailing words.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;
void *FUN_overlay_19__02199378(unsigned int *p,const unsigned int *in) {p[0]=in[0];*(Vec *)(p+1)=*(const Vec *)(in+1);*(Vec *)(p+4)=*(const Vec *)(in+4);*(Vec *)(p+7)=*(const Vec *)(in+7);p[10]=in[10];p[11]=in[11];p[12]=in[12];p[13]=in[13];p[14]=in[14];p[15]=in[15];return p;}
