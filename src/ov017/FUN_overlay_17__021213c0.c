// FUN_overlay_17__021213c0 @ 0x021213c0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_17__021213c0 @ 0x021213c0 (code/full extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game/UI handle, selection-stack or
 * bounds wrapper; actual receiver and getter register flows preserved.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch393.md.
 */
extern void FUN_overlay_17__0211e784(int);
void FUN_overlay_17__021213c0(int *self) { FUN_overlay_17__0211e784(self[3]);self[3]=-1; }
