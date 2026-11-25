// FUN_overlay_11__021213e4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_11__021213e4 @ 0x021213e4
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Decrement nonzero counter, otherwise reload period, then return stored counter.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_11__021213e4(unsigned int *self) { if(self[0]) self[0]--; else self[0]=self[1]; return self[0]; }
