// flags: -O4,p
// FUN_overlay_21__0219ba24 @ 0x0219ba24 (code 0x4c, pool extent 0x5c, thumb)
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize state object, sentinels and two default vectors.
 * Field identities remain provisional.
 */
extern unsigned char DAT_020ed09c[];
extern unsigned char DAT_020ed0a0[];
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_021a1440[];
typedef struct {int v[3];} Vec;
extern void *FUN_overlay_21__0219b6c4(void *,void *,void *);
int *FUN_overlay_21__0219ba24(int *p,void *a,void *b) {FUN_overlay_21__0219b6c4(p,a,b);p[0]=((unsigned int)DAT_021a1440);p[3]=-1;p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[8]=-1;p[9]=*(int *)DAT_020ed0a0;p[10]=*(int *)DAT_020ed09c;*(Vec *)(p+11)=*(Vec *)DAT_020fc958;*(Vec *)(p+14)=*(Vec *)DAT_020fc958;p[17]=0;return p;}
