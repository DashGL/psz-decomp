// FUN_overlay_17__02124498 @ 0x02124498 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124498 @ 0x02124498 (code/full extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game/UI handle, selection-stack or
 * bounds wrapper; actual receiver and getter register flows preserved.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch393.md.
 */
extern int FUN_overlay_17__02123eec(void *);extern void FUN_overlay_17__02123d58(void *,int);
void FUN_overlay_17__02124498(void *self) { FUN_overlay_17__02123d58(self,FUN_overlay_17__02123eec(self)); }
