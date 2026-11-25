// FUN_overlay_12__02130644 @ 0x02130644 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__02130644 @ 0x02130644 (code 0x38, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Configure game view/resources and schedule callbacks with explicit stack ABI.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch366.md.
 */
extern void FUN_overlay_12__02131b10(int);extern void FUN_overlay_12__0212c694(const void *);extern void FUN_overlay_12__0212c6b4(const void *);extern void FUN_overlay_12__02133774(void *,int);
void FUN_overlay_12__02130644(int *self) { FUN_overlay_12__02131b10(0);FUN_overlay_12__02131b10(1);FUN_overlay_12__02131b10(4);FUN_overlay_12__0212c694((void *)0x021387ec);FUN_overlay_12__0212c6b4((void *)0x02138784);FUN_overlay_12__02133774(self,1);self[47]=1;self[18]=0; }
