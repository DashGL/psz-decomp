// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_overlay_12__02127ab8 @ 0x02127ab8
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_0213df08[];
extern char D_0213de40[];
extern char D_0213de68[];
extern char D_0213de54[];
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily acquire two resource handles if each is invalid.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
void FUN_overlay_12__02127ab8(int *p) {if(p[2]==-1)p[2]=FUN_020c2438(FUN_020c1fc8(),D_0213df08,D_0213de40,1);if(p[3]==-1)p[3]=FUN_020c2438(FUN_020c1fc8(),D_0213de68,D_0213de54,1);}
