// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x86, exact bytes and relocation targets.
// check: 2.0/sp2p3 full extent 0x86 exact_bytes=0 bad_relocs=0
// ROM counted-copy widths and field boundaries: notes/sessions/matching-overlays-2026-11-12-aggregate-copies.json
typedef struct {unsigned char x[8];} Copy_overlay_14__021204ec_B8;
typedef struct {unsigned short x[18];} Copy_overlay_14__021204ec_H18;
// FUN_overlay_14__021204ec @ 0x021204ec (code 0x86, pool extent 0x86, thumb)
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Stage changed identifier and structured descriptor, preserving component widths.
 * Field identities remain provisional.
 */
void FUN_overlay_14__021204ec(unsigned char *p,unsigned int id,const unsigned char *in) {int i;if(((unsigned int *)p)[19]==id)return;((unsigned int *)p)[20]=id;p[84]=in[0];p[85]=in[1];p[86]=in[2];p[87]=in[3];p[88]=in[4];p[89]=in[5];p[90]=in[6];p[91]=in[7];*(Copy_overlay_14__021204ec_H18 *)(p+92)=*(const Copy_overlay_14__021204ec_H18 *)(in+8);*(Copy_overlay_14__021204ec_B8 *)(p+128)=*(const Copy_overlay_14__021204ec_B8 *)(in+44);*(unsigned int *)(p+136)=*(const unsigned int *)(in+52);*(unsigned int *)(p+140)=*(const unsigned int *)(in+56);}
