// FUN_overlay_12__02121ebc @ 0x02121ebc (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121ebc @ 0x02121ebc (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Controller state transition/cleanup; deliberate switch fallthrough retained.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch364.md.
 */
extern void FUN_overlay_12__02121fa0(void);extern void FUN_overlay_12__02121d58(void *);
void FUN_overlay_12__02121ebc(char *self,int next) { if(*(int *)(self+0xc90)==6){switch(next){case 0:FUN_overlay_12__02121fa0();FUN_overlay_12__02121d58(self);break;case 2:case 3:FUN_overlay_12__02121fa0();break;default:return;}*(int *)(self+0xc90)=next;*(int *)(self+0xc8c)=0;} }
