// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// Global member widths and offsets follow the ROM accesses at its literal-pool base.
// FUN_overlay_21__0219ab04 @ 0x0219ab04 (code 0xd0, pool extent 0xdc, thumb)
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Construct transition receiver with table, sentinels, vector defaults and cleared fields.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;

extern struct { unsigned int field_0; } DAT_020fc988;
extern struct { Vec field_0; } DAT_020fc958;
void *FUN_overlay_21__0219ab04(unsigned int *p) {p[0]=0x021a133c;p[1]=0;p[2]=~0U;p[3]=0;p[4]=~0U;p[5]=~0U;p[6]=~0U;p[7]=0;p[8]=0;p[9]=0;p[10]=~0U;p[11]=~0U;p[12]=~0U;p[13]=0;p[14]=0;p[15]=0;p[16]=DAT_020fc988.field_0;p[17]=DAT_020fc988.field_0;p[18]=DAT_020fc988.field_0;((unsigned short *)p)[38]=0;((unsigned short *)p)[39]=0;((unsigned short *)p)[40]=0;((unsigned short *)p)[41]=0;((unsigned short *)p)[42]=0;((unsigned short *)p)[43]=0;p[22]=0;p[23]=0;*(Vec *)(p+24)=DAT_020fc958.field_0;p[30]=0;p[31]=~0U;p[32]=0;p[33]=0;p[34]=0;p[35]=0;p[36]=0;p[37]=0;p[38]=0;p[39]=0;p[40]=0;p[41]=0;p[42]=0;p[43]=0;p[44]=0;p[45]=0;p[46]=0;return p;}
