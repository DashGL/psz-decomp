// FUN_overlay_15__021342c0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__021342c0 @ 0x021342c0 (code 0x8, pool extent 0xc, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store value into global context field; leaves incoming r0 unchanged.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern unsigned int * D_0213e8e0[];
unsigned int FUN_overlay_15__021342c0(unsigned int value) { unsigned int *context=D_0213e8e0[1]; context[2]=value; return value; }
