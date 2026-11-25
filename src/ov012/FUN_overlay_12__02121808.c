// FUN_overlay_12__02121808 @ 0x02121808 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121808 @ 0x02121808 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Conditional action/state cleanup; field identities remain provisional.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch344.md.
 */
extern int FUN_overlay_12__02136404(void);
extern void FUN_overlay_12__021363e8(void);
extern void FUN_overlay_12__02121c44(void *,void *);
extern void FUN_overlay_12__0211fb68(void *,int);
void FUN_overlay_12__02121808(char *self) { if(!FUN_overlay_12__02136404()){FUN_overlay_12__021363e8();FUN_overlay_12__02121c44(self,self+0xc90);}FUN_overlay_12__0211fb68(self+0x48,*(int *)(self+0xc90)); }
