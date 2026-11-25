// FUN_overlay_12__02135cbc @ 0x02135cbc (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135cbc @ 0x02135cbc (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Tear down optional singleton and its embedded resources in order.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch362.md.
 */
extern void FUN_overlay_12__02134810(void);extern void FUN_overlay_12__02133aa4(void);extern void FUN_overlay_12__02134a58(void *);extern void FUN_overlay_12__02134b90(void *);extern void *FUN_overlay_12__02134a20(void *);extern void FUN_020ba8ac(void *);extern void FUN_02079144(void);
void FUN_overlay_12__02135cbc(void) {char *self;FUN_overlay_12__02134810();FUN_overlay_12__02133aa4();self=*(char **)0x0213f320;if(self){if(self){FUN_overlay_12__02134a58(self+4);FUN_overlay_12__02134b90(self+12);FUN_overlay_12__02134a20(self+4);FUN_020ba8ac(self);}*(char **)0x0213f320=0;}FUN_02079144();}
