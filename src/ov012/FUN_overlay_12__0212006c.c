// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__0212006c @ 0x0212006c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212006c @ 0x0212006c (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke request helper with constants 34,65,120,112.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__0212c978(int,int,int,int);
void FUN_overlay_12__0212006c(void *unused_receiver) { FUN_overlay_12__0212c978(34,65,120,112); }

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
