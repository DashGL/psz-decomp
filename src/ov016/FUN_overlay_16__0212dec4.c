// flags: -O4,p
// FUN_overlay_16__0212dec4 @ 0x0212dec4 (code 0x14, pool extent 0x20, thumb)
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register callback address in resident exit list; registration only stores pointer values.
 * Field identities remain provisional.
 */
extern unsigned char DAT_02120401[];
extern unsigned char DAT_0212e00c[];
extern unsigned char DAT_0212e018[];
extern void *FUN_overlay_16__02120388(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_16__0212dec4(void) {FUN_overlay_16__02120388((void *)DAT_0212e018);FUN_0200c594((void *)DAT_0212e018,(void *)DAT_02120401,(void *)DAT_0212e00c);}
