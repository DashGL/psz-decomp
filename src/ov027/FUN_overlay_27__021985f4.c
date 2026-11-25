// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_27__021985f4 @ 0x021985f4, verified extent 0xc.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_021997fd[];
// FUN_overlay_27__021985f4 @ 0x021985f4 (code 0x6, pool extent 0xc, thumb)
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Forward the child event to the fixed owner slot-reset handler.
 * Field identities remain provisional.
 */
typedef void (*Handler)(void *);void FUN_overlay_27__021985f4(unsigned char *self){((Handler)((unsigned int)DAT_021997fd + 0u))(*(void **)(self+4));}
