// flags: -O4,p
// FUN_overlay_21__0219c364 @ 0x0219c364 (code 0x4a, pool extent 0x54, thumb)
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Snapshot parent selections, reset vectors and choose animation from table.
 * Field identities remain provisional.
 */
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_021a0044[];
typedef struct {int v[3];} Vec;
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_21__0219c364(int *p) {int *parent=(int *)p[2],*child=(int *)p[1];p[3]=parent[10];p[4]=parent[2];*(Vec *)(p+7)=*(Vec *)DAT_020fc958;*(Vec *)(p+10)=*(Vec *)DAT_020fc958;p[14]=0;FUN_02040c0c(child,p[3],((int *)DAT_021a0044)[p[4]],4096,10);}
