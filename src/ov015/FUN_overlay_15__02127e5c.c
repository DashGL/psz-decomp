// FUN_overlay_15__02127e5c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02127e5c @ 0x02127e5c (code 0x12, pool extent 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Test caller mask against state word shifted right four.
 * Field identities and high-level API contracts remain provisional.
 */
extern char G_0213E7EC[];
int FUN_overlay_15__02127e5c(unsigned int mask) { return (mask&(((unsigned int *)G_0213E7EC)[2]>>4))!=0; }
