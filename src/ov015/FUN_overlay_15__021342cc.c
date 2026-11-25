// FUN_overlay_15__021342cc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__021342cc @ 0x021342cc (code 0xa, pool extent 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read unsigned halfword +52 through module context pointer.
 * Field identities and high-level API contracts remain provisional.
 */
extern char G_0213E8E0[];
unsigned int FUN_overlay_15__021342cc(void) { char *context=((char **)G_0213E8E0)[1]; return *(unsigned short *)(context+0x52); }
