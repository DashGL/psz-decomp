// FUN_overlay_26__02198dac @ 0x02198dac (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_26__02198dac @ 0x02198dac (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Test flag bit zero of owner word +d4.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_26__02198dac(char *self) { if(*(unsigned int *)(self+0xd4)&1) return 1; return 0; }
