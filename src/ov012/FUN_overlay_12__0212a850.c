// FUN_overlay_12__0212a850 @ 0x0212a850 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212a850 @ 0x0212a850 (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * State transition/message orchestration; field roles remain provisional.
 * ABI review in notes/sessions/coverage-overlays-2026-11-05-batch341.md.
 */
extern void *FUN_02086e3c(void);
extern int FUN_02087254(void *);
extern int FUN_020872c4(void *);
extern void FUN_overlay_12__0212acf0(void *);
void FUN_overlay_12__0212a850(int *self) { if(!self[123]){self[123]=FUN_02087254(FUN_02086e3c());}else if(!FUN_020872c4(FUN_02086e3c())){FUN_overlay_12__0212acf0(self);} }
