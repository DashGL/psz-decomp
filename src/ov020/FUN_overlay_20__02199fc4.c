// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8e, exact bytes and relocation targets.
// check: 2.0/sp2p3 full extent 0x8e exact_bytes=0 bad_relocs=0
// ROM counted-copy widths and field boundaries: notes/sessions/matching-overlays-2026-11-12-aggregate-copies.json
typedef struct {unsigned char data[4];} Copy_overlay_20__02199fc4_1_4;
typedef struct {unsigned char data[8];} Copy_overlay_20__02199fc4_1_8;
// FUN_overlay_20__02199fc4 @ 0x02199fc4 (code 0x8e, pool extent 0x8e, thumb)
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Copy mixed-width descriptor and trailing vector, preserving field order.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;
void *FUN_overlay_20__02199fc4(signed char *p,const signed char *in) {int i;p[0]=in[0];p[1]=in[1];p[2]=in[2];p[3]=in[3];*(unsigned int *)(p+4)=*(const unsigned int *)(in+4);((unsigned short *)p)[4]=((const unsigned short *)in)[4];((unsigned short *)p)[5]=((const unsigned short *)in)[5];*(Copy_overlay_20__02199fc4_1_4 *)(p+12)=*(const Copy_overlay_20__02199fc4_1_4 *)(in+12);*(Copy_overlay_20__02199fc4_1_8 *)(p+16)=*(const Copy_overlay_20__02199fc4_1_8 *)(in+16);((unsigned short *)p)[12]=((const unsigned short *)in)[12];((unsigned short *)p)[13]=((const unsigned short *)in)[13];*(Copy_overlay_20__02199fc4_1_4 *)(p+28)=*(const Copy_overlay_20__02199fc4_1_4 *)(in+28);((unsigned short *)p)[16]=((const unsigned short *)in)[16];((unsigned short *)p)[17]=((const unsigned short *)in)[17];*(Vec *)(p+36)=*(const Vec *)(in+36);return p;}
