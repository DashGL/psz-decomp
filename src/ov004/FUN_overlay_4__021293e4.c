// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_4__021293e4 @ 0x021293e4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__021293e4 @ 0x021293e4 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Normalize selected global key bit test to boolean.
 * Field identities remain provisional.
 */
extern int FUN_020bbf6c(unsigned int);
int FUN_overlay_4__021293e4(void *unused_receiver) {if(FUN_020bbf6c(2))return 1;return 0;}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
