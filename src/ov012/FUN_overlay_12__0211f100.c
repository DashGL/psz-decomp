// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_overlay_12__0211f100 @ 0x0211f100, verified extent 0x38.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213d278[];
extern unsigned char DAT_0213d298[];
extern unsigned char DAT_0213d2b8[];
extern unsigned char DAT_0213d2dc[];
// FUN_overlay_12__0211f100 @ 0x0211f100 (code 0x26, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Acquire two descriptor resources and store their handles.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,const void *,const void *,int);
void FUN_overlay_12__0211f100(int *p) {p[0]=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213d278 + 0u),(void *)((unsigned int)DAT_0213d298 + 0u),2);p[1]=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213d2b8 + 0u),(void *)((unsigned int)DAT_0213d2dc + 0u),2);}
