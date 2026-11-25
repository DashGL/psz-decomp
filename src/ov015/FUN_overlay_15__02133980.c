// FUN_overlay_15__02133980 @ 0x02133980 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02133980 @ 0x02133980 (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Set module state to six and invoke input-free resident helper.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_15__02133b9c(unsigned int);
extern void FUN_020641b0(void);
void FUN_overlay_15__02133980(void) { FUN_overlay_15__02133b9c(6); FUN_020641b0(); }
