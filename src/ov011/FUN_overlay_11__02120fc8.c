// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_11__02120fc8 @ 0x02120fc8, verified extent 0x14.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02123810[];
// FUN_overlay_11__02120fc8 @ 0x02120fc8 (code 0x10, pool extent 0x14, thumb)
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke optional module callback indexed by second argument; no argument supplied to callback.
 * Field identities and high-level API contracts remain provisional.
 */
void FUN_overlay_11__02120fc8(void *unused,unsigned int index) { void (*callback)(void)=((void (**)(void))((unsigned int)DAT_02123810 + 0u))[index]; if(callback) callback(); }
