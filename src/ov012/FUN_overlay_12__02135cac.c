// FUN_overlay_12__02135cac @ 0x02135cac (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135cac @ 0x02135cac (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Read optional global pointer; target retains an explicit null branch.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02135cac(void) { void *value=*(void **)0x0213f320; if(value) return value; return 0; }
