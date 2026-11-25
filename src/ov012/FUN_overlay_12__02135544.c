// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// FUN_overlay_12__02135544 @ 0x02135544, verified extent 0x58.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213eb08[];
extern unsigned char DAT_0213eb20[];
extern unsigned char DAT_0213eb40[];
extern unsigned char DAT_0213f31c[];
// FUN_overlay_12__02135544 @ 0x02135544 (code 0x46, pool extent 0x58, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize display resources and optional shared text-resource handle.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02135864(void *);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
extern void *FUN_020ba894(int);
extern void *FUN_0208f068(void);
extern int FUN_0208ef48(void *,void *,int);
void FUN_overlay_12__02135544(int *p) {int *h;void *m;p[4]=1;FUN_overlay_12__02135864(p);p[6]=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213eb20 + 0u),(void *)((unsigned int)DAT_0213eb40 + 0u),1);h=FUN_020ba894(4);if(h){*h=-1;m=FUN_0208f068();if(m)*h=FUN_0208ef48(m,*(void **)((unsigned int)DAT_0213eb08 + 0u),11);}*(int **)((unsigned int)DAT_0213f31c + 0u)=h;}
