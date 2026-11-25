// FUN_overlay_28__0219ab6c @ 0x0219ab6c (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219ab6c @ 0x0219ab6c (inventory code 0x30, true extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay28 ROM reconstruction, 2026-11-05.
 * Game controller reset, cleanup or complete state dispatcher.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch358.md.
 * Full CFG extent used even where inventory truncates a switch.
 */
extern void FUN_overlay_28__0219ae10(void *);extern void FUN_overlay_28__0219aeb8(void *);extern void FUN_overlay_28__0219af98(void *);extern void FUN_overlay_28__0219ad48(void *);extern void FUN_overlay_28__0219b09c(void *);
void FUN_overlay_28__0219ab6c(void *self,unsigned int state) { switch(state){case 6:FUN_overlay_28__0219ae10(self);break;case 4:FUN_overlay_28__0219aeb8(self);break;case 2:FUN_overlay_28__0219af98(self);break;case 1:FUN_overlay_28__0219ad48(self);break;case 3:FUN_overlay_28__0219b09c(self);break;default:break;} }
