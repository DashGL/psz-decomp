// flags: -O4,p
// FUN_overlay_18__021239b0 @ 0x021239b0 (code 0x14, pool extent 0x20, thumb)
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register callback address in resident exit list; registration only stores pointer values.
 * Field identities remain provisional.
 */
extern unsigned char DAT_0211f819[];
extern unsigned char DAT_02124578[];
extern unsigned char DAT_02124584[];
extern void *FUN_overlay_18__0211f7f4(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_18__021239b0(void) {FUN_overlay_18__0211f7f4((void *)DAT_02124584);FUN_0200c594((void *)DAT_02124584,(void *)DAT_0211f819,(void *)DAT_02124578);}
