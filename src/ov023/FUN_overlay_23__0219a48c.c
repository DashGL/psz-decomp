// flags: -O4,s
// FUN_overlay_23__0219a48c @ 0x0219a48c (code 0x36, pool extent 0x48, thumb)
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Reset two vectors and global default scalar fields.
 * Field identities remain provisional.
 */
extern unsigned char DAT_020ed09c[];
extern unsigned char DAT_020ed0a0[];
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_020fc988[];
typedef struct {unsigned int x,y,z;} Vec;
void FUN_overlay_23__0219a48c(unsigned int *p) {*(Vec *)p=*(Vec *)DAT_020fc958;*(Vec *)(p+3)=*(Vec *)DAT_020fc958;p[6]=*(unsigned int *)DAT_020fc988;p[7]=*(unsigned int *)DAT_020ed09c;p[8]=*(unsigned int *)DAT_020ed0a0;p[9]=0;}
