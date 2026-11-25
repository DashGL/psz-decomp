// FUN_overlay_9__0211f508 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_9__0211f508 @ 0x0211f508
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const int D_02120bd0[];
/* USA overlay9 ROM reconstruction, 2026-11-05.
 * Controller destruction/reset with exact observed cleanup order.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch351.md.
 * Field identities remain provisional.
 */
extern void FUN_overlay_9__0211e734(void *);extern void FUN_overlay_9__0211e70c(void *);
void *FUN_overlay_9__0211f508(int *self) { const int *source=D_02120bd0;self[12]=1;self[13]=0;self[14]=source[7];self[15]=source[8];self[16]=0;FUN_overlay_9__0211e734(self+12);FUN_overlay_9__0211e70c(self);return self; }
