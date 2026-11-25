// FUN_overlay_15__0211fdfc @ 0x0211fdfc (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__0211fdfc @ 0x0211fdfc (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Test input flag bit four.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_15__0211fdfc(unsigned int value) { int set=0; if(value&16) set=1; return set; }
