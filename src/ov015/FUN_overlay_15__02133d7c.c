// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_15__02133d7c @ 0x02133d7c, verified extent 0x14.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e8e0[];
// FUN_overlay_15__02133d7c @ 0x02133d7c (code 0x10, pool extent 0x14, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Update global object field except for modes nine and ten.
 * Field identities remain provisional.
 */
void FUN_overlay_15__02133d7c(unsigned int value) {unsigned int *p=*(unsigned int **)((unsigned int)DAT_0213e8e0 + 4u);if(p[16]-9U>1U)p[21]=value;}
