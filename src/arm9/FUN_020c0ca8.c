// FUN_020c0ca8 @ 0x020c0ca8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c0ca8 @ 0x020c0ca8
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Ensure global object readiness then copy its state to supplied output.
 * Evidence: scratch/coverage-root/batch2/020c0ca8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c0be4(void), FUN_020dd8b8(void *,void *);
void FUN_020c0ca8(void *out) { FUN_020c0be4();FUN_020dd8b8((void *)0x0211b404,out); }
