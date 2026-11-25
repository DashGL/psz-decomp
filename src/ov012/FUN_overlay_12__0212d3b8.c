// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_overlay_12__0212d3b8 @ 0x0212d3b8, verified extent 0x44.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020f4c4c[];
extern unsigned char DAT_0211a51c[];
// FUN_overlay_12__0212d3b8 @ 0x0212d3b8 (code 0x38, pool extent 0x44, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Normalize identifier for global mode, find table index and query bounded category value.
 * Field identities remain provisional.
 */
extern int FUN_02084bf8(void *);
extern int FUN_overlay_12__0212d394(void *,int,int);
int FUN_overlay_12__0212d3b8(void *p,int id,int category) {int i;if(FUN_02084bf8((void *)((unsigned int)DAT_0211a51c + 0u)))id-=120000;for(i=0;i<29;i++)if(id==((short *)((unsigned int)DAT_020f4c4c + 0u))[i])return FUN_overlay_12__0212d394(p,i,category);return 0;}
