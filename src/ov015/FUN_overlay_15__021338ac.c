// flags: -O4,p
// FUN_overlay_15__021338ac @ 0x021338ac (code 0x3c, pool extent 0x40, thumb)
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Require all selected peer slots to report ready.
 * Field identities remain provisional.
 */
extern unsigned short * DAT_0213e8dc[];
extern int FUN_0205ff7c(int);
int FUN_overlay_15__021338ac(void) {unsigned short i;if(!(*DAT_0213e8dc)[1])return 0;for(i=1;i<16;i++)if((*DAT_0213e8dc)[1]&(1u<<i))if(!FUN_0205ff7c(i))return 0;return 1;}
