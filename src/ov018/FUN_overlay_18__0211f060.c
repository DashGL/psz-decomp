// FUN_overlay_18__0211f060 @ 0x0211f060 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211f060 @ 0x0211f060 (code 0x18, full extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Nullable game/UI object factory or
 * global-session lifecycle wrapper; inherited register use checked.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch392.md.
 */
extern void *FUN_overlay_18__021212f0(void);extern void FUN_overlay_18__021218f4(void *);
int FUN_overlay_18__0211f060(int *self) { if(!self[1]){FUN_overlay_18__021218f4(FUN_overlay_18__021212f0());return 1;}return 0; }
