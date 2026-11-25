// flags: -O4,p
// FUN_overlay_9__02120f9c @ 0x02120f9c (code 0x14, pool extent 0x20, thumb)
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register raw exit callback address.
 * Field identities remain provisional.
 */
extern unsigned char DAT_0211f539[];
extern unsigned char DAT_02121128[];
extern unsigned char DAT_02121134[];
extern void *FUN_overlay_9__0211f508(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_9__02120f9c(void) {FUN_overlay_9__0211f508((void *)DAT_02121134);FUN_0200c594((void *)DAT_02121134,(void *)DAT_0211f539,(void *)DAT_02121128);}
