// flags: -O4,p
// FUN_overlay_15__02131064 @ 0x02131064 (code 0x22, pool extent 0x2c, thumb)
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store indexed palette source and destination then schedule queue-one transfer.
 * Field identities remain provisional.
 */
extern unsigned char DAT_02131091[];
extern unsigned int DAT_0213e8b0[];
extern void *FUN_overlay_15__021373d8(unsigned int,void *,void *,unsigned int);
void FUN_overlay_15__02131064(char *source,unsigned int sourceIndex,unsigned int destIndex) {unsigned int *g=DAT_0213e8b0;g[1]=(unsigned int)(source+(sourceIndex<<5));g[2]=0x05000000+(destIndex<<5);FUN_overlay_15__021373d8(1,(void *)DAT_02131091,0,120);}
