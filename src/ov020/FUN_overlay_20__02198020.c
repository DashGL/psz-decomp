// FUN_overlay_20__02198020 @ 0x02198020 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198020 @ 0x02198020 (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay20 ROM reconstruction, 2026-11-05.
 * Controller destruction/reset with exact observed cleanup order.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch351.md.
 * Field identities remain provisional.
 */
extern void FUN_overlay_20__02198794(void *);extern void FUN_overlay_20__0219c1e8(void *);extern void FUN_overlay_20__0219d47c(void *);extern void FUN_overlay_20__0219df74(void *);extern void FUN_overlay_20__0219e7b4(void *);extern void *FUN_02035518(void *);
void *FUN_overlay_20__02198020(int *self) { self[0]=0x0219f8d4;FUN_overlay_20__02198794(self);FUN_overlay_20__0219c1e8(self);FUN_overlay_20__0219d47c(self);FUN_overlay_20__0219df74(self);FUN_overlay_20__0219e7b4(self);FUN_02035518(self);return self; }
