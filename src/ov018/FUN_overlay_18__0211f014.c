// FUN_overlay_18__0211f014 @ 0x0211f014 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211f014 @ 0x0211f014 (code 0x10, full extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Nullable game/UI object factory or
 * global-session lifecycle wrapper; inherited register use checked.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch392.md.
 */
extern void FUN_overlay_18__02120ff0(void);
void * FUN_overlay_18__0211f014(int *self) { self[0]=0x02123a6c;FUN_overlay_18__02120ff0();return self; }
