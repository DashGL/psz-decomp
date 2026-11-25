// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
// check: 2.0/sp2p3 full extent 0x56 exact_bytes=0 bad_relocs=0
// ROM counted-copy widths and field boundaries: notes/sessions/matching-overlays-2026-11-12-aggregate-copies.json
typedef struct {unsigned char data[100];} Copy_overlay_12__0212d938_1_100;
typedef struct {unsigned char data[12];} Copy_overlay_12__0212d938_1_12;
typedef struct {unsigned char data[69];} Copy_overlay_12__0212d938_1_69;
// FUN_overlay_12__0212d938 @ 0x0212d938 (code 0x56, pool extent 0x56, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Copy three byte arrays then trailing vector, preserving padding gap.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;
void *FUN_overlay_12__0212d938(unsigned char *p,const unsigned char *in) {int i;*(Copy_overlay_12__0212d938_1_69 *)(p)=*(const Copy_overlay_12__0212d938_1_69 *)(in);*(Copy_overlay_12__0212d938_1_12 *)(p+69)=*(const Copy_overlay_12__0212d938_1_12 *)(in+69);*(Copy_overlay_12__0212d938_1_100 *)(p+81)=*(const Copy_overlay_12__0212d938_1_100 *)(in+81);*(Vec *)(p+184)=*(const Vec *)(in+184);return p;}
