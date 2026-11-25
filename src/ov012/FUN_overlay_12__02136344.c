// flags: -O4,p
// FUN_overlay_12__02136344 @ 0x02136344 (code 0x34, pool extent 0x3c, thumb)
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear shared activity flag, release two resource handles and reset sentinels.
 * Field identities remain provisional.
 */
extern int DAT_0213eb74[];
extern int DAT_0213f328[];
extern void *FUN_0208f068(void);
extern void FUN_0208efd4(void *,int);
void FUN_overlay_12__02136344(void) {if(*DAT_0213f328){void *m;*DAT_0213f328=0;m=FUN_0208f068();if(m){FUN_0208efd4(m,(DAT_0213eb74)[1]);FUN_0208efd4(m,*DAT_0213eb74);}(DAT_0213eb74)[1]=-1;*DAT_0213eb74=-1;}}
