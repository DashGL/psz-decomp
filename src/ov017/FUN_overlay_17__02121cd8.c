// FUN_overlay_17__02121cd8 @ 0x02121cd8 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121cd8 @ 0x02121cd8 (code 0x54, full extent 0x54, thumb)
// check: vers=2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch409.md.
 */
extern void *FUN_overlay_17__0211e7a8(int);extern void FUN_overlay_17__0211e95c(void *,int,int,int);
void FUN_overlay_17__02121cd8(int *self,int index) { void *resource=FUN_overlay_17__0211e7a8(self[60]);if(resource){if(index==-1){FUN_overlay_17__0211e95c(resource,3,0,1);FUN_overlay_17__0211e95c(resource,1,0,1);FUN_overlay_17__0211e95c(resource,2,0,1);FUN_overlay_17__0211e95c(resource,0,0,1);}else FUN_overlay_17__0211e95c(resource,index,0,1);} }
