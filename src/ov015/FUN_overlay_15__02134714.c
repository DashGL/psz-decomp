// FUN_overlay_15__02134714 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02134714 @ 0x02134714 (code 0x8, pool extent 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store value into global context field; leaves incoming r0 unchanged.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern char G_0213E8E0[];
unsigned int FUN_overlay_15__02134714(unsigned int value) { unsigned int *context=((unsigned int **)G_0213E8E0)[1]; context[19]=value; return value; }
