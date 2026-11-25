// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_20__0219dd04 @ 0x0219dd04, verified extent 0x34.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0219fde4[];
extern unsigned char DAT_0219fdec[];
// FUN_overlay_20__0219dd04 @ 0x0219dd04 (code 0x2c, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Choose bounded random countdown and start child animation five.
 * Field identities remain provisional.
 */
extern void FUN_02086d60(int *,const int *,const int *);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_20__0219dd04(unsigned int *p) {int value;void *child=(void *)p[1];FUN_02086d60(&value,(int *)((unsigned int)DAT_0219fde4 + 0u),(int *)((unsigned int)DAT_0219fdec + 0u));p[3]=value;FUN_02040c0c(child,0,5,4096,10);}
