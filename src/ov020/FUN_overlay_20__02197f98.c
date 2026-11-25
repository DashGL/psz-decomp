// FUN_overlay_20__02197f98 @ 0x02197f98 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_20__02197f98 @ 0x02197f98 (code 0x14, full extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Nullable game/UI object factory or
 * global-session lifecycle wrapper; inherited register use checked.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch392.md.
 */
extern void *FUN_020ba894(unsigned int);extern void *FUN_overlay_20__021990f8(void *);
void * FUN_overlay_20__02197f98(void) { void *p=FUN_020ba894(300);if(p)p=FUN_overlay_20__021990f8(p);return p; }
