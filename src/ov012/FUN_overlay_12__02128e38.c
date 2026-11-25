// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_overlay_12__02128e38 @ 0x02128e38, verified extent 0x4c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213dfbc[];
extern unsigned char DAT_0213dfd0[];
extern unsigned char DAT_0213dfe4[];
extern unsigned char DAT_0213e018[];
// FUN_overlay_12__02128e38 @ 0x02128e38 (code 0x3a, pool extent 0x4c, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily acquire two resource handles if each is invalid.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
void FUN_overlay_12__02128e38(int *p) {if(p[2]==-1)p[2]=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213e018 + 0u),(void *)((unsigned int)DAT_0213dfbc + 0u),1);if(p[3]==-1)p[3]=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213dfe4 + 0u),(void *)((unsigned int)DAT_0213dfd0 + 0u),1);}
