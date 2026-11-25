// FUN_overlay_15__0213149c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__0213149c @ 0x0213149c
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Fill rectangle bounds for selected shared sprite region.
 * Field identities remain provisional.
 */
extern unsigned char data_0213a658[];
extern unsigned char * data_0213e8bc[];
void FUN_overlay_15__0213149c(unsigned int region,unsigned short *out) {unsigned char **g=data_0213e8bc;out[0]=*(unsigned short *)(*g+16);out[2]=out[0]+12;switch(region){case 1:out[1]=*(unsigned short *)(*g+18)+(*g)[26];out[3]=out[1]+data_0213a658[(*g)[27]];break;case 2:out[1]=*(unsigned short *)(*g+18)-13;out[3]=*(unsigned short *)(*g+18);break;case 3:out[1]=*(unsigned short *)(*g+18)+(*g)[25];out[3]=out[1]+13;break;case 4:out[1]=*(unsigned short *)(*g+18);out[3]=out[1]+(*g)[25];break;}}
