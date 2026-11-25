// flags: -O4,p
// FUN_overlay_10__021217a4 @ 0x021217a4 (code 0x28, pool extent 0x2c, thumb)
/* USA overlay10 ROM reconstruction, 2026-11-05.
 * Controller destruction/reset with exact observed cleanup order.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch351.md.
 * Field identities remain provisional.
 */
extern const int DAT_021222d4[];
extern void FUN_overlay_10__02121110(void *);extern void FUN_overlay_10__021210d8(void *);
void *FUN_overlay_10__021217a4(int *self) { const int *source=DAT_021222d4;self[18]=0;self[19]=0;self[20]=source[30];self[21]=source[31];self[22]=0;FUN_overlay_10__02121110(self+18);FUN_overlay_10__021210d8(self);return self; }
