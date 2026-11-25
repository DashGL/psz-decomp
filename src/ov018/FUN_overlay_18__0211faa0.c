// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_18__0211faa0 @ 0x0211faa0, verified extent 0x1c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020655d8[];
// FUN_overlay_18__0211faa0 @ 0x0211faa0 (code 0x16, pool extent 0x1c, thumb)
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Advance record cursor then copy preceding 56-byte record into next slot.
 * Field identities remain provisional.
 */
void FUN_overlay_18__0211faa0(unsigned int *p) {unsigned int previous=p[225];p[225]=previous+56;((void (*)(const void *,void *,unsigned int))((unsigned int)DAT_020655d8 + 0u))((void *)previous,(void *)p[225],56);}
