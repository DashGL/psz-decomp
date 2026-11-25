// FUN_overlay_12__0212ed80 @ 0x0212ed80 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212ed80 @ 0x0212ed80 (code 0x3c, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Controller state transition/cleanup; deliberate switch fallthrough retained.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch364.md.
 */
extern void FUN_overlay_12__0212f698(void *);extern void FUN_overlay_12__0212ca04(void);extern void *FUN_020c1fc8(void);extern void FUN_020c2624(void *,void *);extern void FUN_020a45a4(int);extern void FUN_overlay_12__0212c9a0(void);extern void *FUN_overlay_12__02131dd4(void *);
void * FUN_overlay_12__0212ed80(int *self) { self[0]=0x0213e500;if(self[17]==1)FUN_overlay_12__0212f698(self);else if(self[17]==0){FUN_overlay_12__0212ca04();FUN_020c2624(FUN_020c1fc8(),self+61);}FUN_020a45a4(1);FUN_overlay_12__0212c9a0();FUN_overlay_12__02131dd4(self);return self; }
