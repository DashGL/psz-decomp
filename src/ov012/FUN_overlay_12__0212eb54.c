// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_12__0212eb54 @ 0x0212eb54
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_0213e394[];
extern char D_0213e3b4[];
extern char D_0213e3d4[];
extern char D_0213e3f8[];
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Configure shared display and acquire two resource handles.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c9b8(void);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,const void *,const void *,int);
void FUN_overlay_12__0212eb54(int *p) {FUN_overlay_12__0212c9b8();p[0]=FUN_020c2438(FUN_020c1fc8(),D_0213e394,D_0213e3b4,2);p[1]=FUN_020c2438(FUN_020c1fc8(),D_0213e3d4,D_0213e3f8,2);}
