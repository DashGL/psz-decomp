// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_15__0213614c @ 0x0213614c, verified extent 0x1c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02136101[];
extern unsigned char DAT_0213e900[];
// FUN_overlay_15__0213614c @ 0x0213614c (code 0x14, pool extent 0x1c, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Select fixed-size global display record and perform record cleanup.
 * Field identities remain provisional.
 */
void FUN_overlay_15__0213614c(unsigned int index) {char *p=*(char **)((unsigned int)DAT_0213e900 + 0u);((void (*)(void *))((unsigned int)DAT_02136101 + 0u))(p+1552+48*index);}
