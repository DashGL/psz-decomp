// FUN_overlay_12__02131c00 @ 0x02131c00 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131c00 @ 0x02131c00 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Acquire named resource only for empty handle, choosing synchronous or asynchronous mode.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,const void *,const void *,int);
void FUN_overlay_12__02131c00(int *p,const void *name,int async) {if(*p==-1) {int mode=async?2:1;*p=FUN_020c2438(FUN_020c1fc8(),name,(void *)0x0213ba28,mode);}}
