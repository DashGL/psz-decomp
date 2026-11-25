// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_overlay_15__0213260c @ 0x0213260c, verified extent 0x18.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e8cc[];
// FUN_overlay_15__0213260c @ 0x0213260c (code 0x12, pool extent 0x18, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Report nested global field nonzero.
 * Field identities remain provisional.
 */
int FUN_overlay_15__0213260c(void) {unsigned int *p=((unsigned int **)((unsigned int)DAT_0213e8cc + 0u))[1];return p[5]!=0;}
