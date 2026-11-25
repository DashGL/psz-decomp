// FUN_overlay_18__0211f1e8 @ 0x0211f1e8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211f1e8 @ 0x0211f1e8 (code 0x12, full extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Nullable game/UI object factory or
 * global-session lifecycle wrapper; inherited register use checked.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch392.md.
 */
extern void *FUN_020ba894(unsigned int);extern void *FUN_overlay_18__0211efd0(void *);
void * FUN_overlay_18__0211f1e8(void) { void *p=FUN_020ba894(12);if(p)p=FUN_overlay_18__0211efd0(p);return p; }
