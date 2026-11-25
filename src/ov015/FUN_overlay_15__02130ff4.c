// FUN_overlay_15__02130ff4 @ 0x02130ff4 (code 0x30, pool extent 0x34, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy palette rows into shared destination with 64-byte row stride.
 * Field identities remain provisional.
 */
extern void FUN_020654dc(const void *,void *,unsigned int);
void FUN_overlay_15__02130ff4(const unsigned char *src,int index,int width,int rows) {unsigned char *d=*(unsigned char **)0x0213e8b0+4+index*2;int i;for(i=0;i<rows;i++,src+=64,d+=64)FUN_020654dc(src,d,width*2);}
