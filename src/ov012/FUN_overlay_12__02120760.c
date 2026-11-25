// FUN_overlay_12__02120760 @ 0x02120760 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120760 @ 0x02120760 (code 0x38, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Game state transition, singleton construction or cleanup.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch357.md.
 * Field identities remain provisional; all stack inputs are explicit.
 */
extern void *FUN_overlay_12__02122030(void *);extern void FUN_020ba8ac(void *);extern void FUN_overlay_12__021363e8(void);extern void *FUN_020c1fc8(void);extern void FUN_020c2624(void *,void *);extern void FUN_overlay_12__02131b98(void);extern void FUN_overlay_12__0212c84c(void);
void FUN_overlay_12__02120760(char *self) { void *p=*(void **)(self+0xbc8);if(p){if(p){FUN_overlay_12__02122030(p);FUN_020ba8ac(p);}*(void **)(self+0xbc8)=0;}FUN_overlay_12__021363e8();FUN_020c2624(FUN_020c1fc8(),self);FUN_overlay_12__02131b98();FUN_overlay_12__0212c84c(); }
