// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_15__0212b654 @ 0x0212b654, verified extent 0x34.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213a2e8[];
extern unsigned char DAT_0213a2ea[];
extern unsigned char DAT_0213a2ec[];
extern unsigned char DAT_0213e858[];
// FUN_overlay_15__0212b654 @ 0x0212b654 (code 0x24, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Select sprite pair and coordinates from global category-indexed table.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__0212546c(unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_15__0212b654(void) {unsigned int index=*(unsigned char *)((unsigned int)DAT_0213e858 + 0u);unsigned int mode=index<4?2:3;unsigned int offset=index*8;FUN_overlay_15__0212546c(mode,*(unsigned short *)(((unsigned int)DAT_0213a2e8 + 0u)+offset),*(unsigned short *)(((unsigned int)DAT_0213a2ec + 0u)+offset),*(unsigned short *)(((unsigned int)DAT_0213a2ea + 0u)+offset));}
