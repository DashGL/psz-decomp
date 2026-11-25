// FUN_overlay_12__021360f0 @ 0x021360f0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__021360f0 @ 0x021360f0 (code 0x28, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Conditional action/state cleanup; field identities remain provisional.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch344.md.
 */
extern int FUN_overlay_12__0213617c(void *);
extern void FUN_overlay_12__021351e0(void *);
extern void FUN_overlay_12__02132410(void);
extern void FUN_overlay_12__02135e7c(void *);
void FUN_overlay_12__021360f0(void) { char *self=*(char **)0x0213f324;if(self && !FUN_overlay_12__0213617c(self)){FUN_overlay_12__021351e0(self+12);FUN_overlay_12__02132410();FUN_overlay_12__02135e7c(self);} }
