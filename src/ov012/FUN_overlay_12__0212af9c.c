// FUN_overlay_12__0212af9c @ 0x0212af9c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch59.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212af9c @ 0x0212af9c (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * State transition/message orchestration; field roles remain provisional.
 * ABI review in notes/sessions/coverage-overlays-2026-11-05-batch341.md.
 */
extern void FUN_overlay_12__0212b19c(void *,int,int,int,void (*)(void),void (*)(void));
extern void FUN_overlay_12__02129f64(void *);
void FUN_overlay_12__0212af9c(void) { int *self=*(int **)0x0213f2c0; if(self && self[16]==3){FUN_overlay_12__0212b19c(self,23,0,-1,0,0);FUN_overlay_12__02129f64(self);} }
