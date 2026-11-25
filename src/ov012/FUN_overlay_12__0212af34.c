// FUN_overlay_12__0212af34 @ 0x0212af34 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212af34 @ 0x0212af34 (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * State transition/message orchestration; field roles remain provisional.
 * ABI review in notes/sessions/coverage-overlays-2026-11-05-batch341.md.
 */
extern void FUN_overlay_12__0212a934(void *);
extern int FUN_overlay_12__02131fd0(void *,int);
extern void FUN_overlay_12__02129ed4(void *);
void FUN_overlay_12__0212af34(void) { int *self=*(int **)0x0213f2c0; if(self && self[16]==2){FUN_overlay_12__0212a934(self);self[16]=4;FUN_overlay_12__02131fd0(self,1);FUN_overlay_12__0212a934(self);FUN_overlay_12__02129ed4(self);} }
