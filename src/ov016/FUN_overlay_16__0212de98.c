// flags: -O4,p
// FUN_overlay_16__0212de98 @ 0x0212de98 (code 0x1a, pool extent 0x2c, thumb)
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two global receivers and register second receiver exit callback.
 * Field identities remain provisional.
 */
extern unsigned char DAT_02120291[];
extern unsigned char DAT_0212dfc4[];
extern unsigned char DAT_0212dfd0[];
extern unsigned char DAT_0212dfdc[];
extern void *FUN_overlay_16__02120284(void *);
extern void *FUN_overlay_16__021200d4(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_16__0212de98(void) {FUN_overlay_16__02120284((void *)DAT_0212dfc4);FUN_overlay_16__021200d4((void *)DAT_0212dfdc);FUN_0200c594((void *)DAT_0212dfdc,(void *)DAT_02120291,(void *)DAT_0212dfd0);}
