// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_12__02120530 @ 0x02120530, verified extent 0x2c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213d300[];
extern unsigned char DAT_0213d320[];
// FUN_overlay_12__02120530 @ 0x02120530 (code 0x22, pool extent 0x2c, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Load global records six and seven, allocate manager entry and store returned handle.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02131b10(int);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,const void *,const void *,int);
void FUN_overlay_12__02120530(int *p) {FUN_overlay_12__02131b10(6);FUN_overlay_12__02131b10(7);*p=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213d300 + 0u),(void *)((unsigned int)DAT_0213d320 + 0u),1);}
