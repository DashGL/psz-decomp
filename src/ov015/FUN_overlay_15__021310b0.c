// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_15__021310b0 @ 0x021310b0, verified extent 0x1c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_021310cd[];
extern unsigned char DAT_0213e8b0[];
// FUN_overlay_15__021310b0 @ 0x021310b0 (code 0x14, pool extent 0x1c, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store palette source and schedule transfer callback on queue one.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021373d8(unsigned int,void *,void *,unsigned int);
void FUN_overlay_15__021310b0(void *source) {((void **)((unsigned int)DAT_0213e8b0 + 0u))[1]=source;FUN_overlay_15__021373d8(1,(void *)((unsigned int)DAT_021310cd + 0u),0,120);}
