// flags: -O4,p
// FUN_overlay_14__021219c0 @ 0x021219c0 (code 0x14, pool extent 0x20, thumb)
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register callback address in resident exit list; registration only stores pointer values.
 * Field identities remain provisional.
 */
extern unsigned char DAT_02121795[];
extern unsigned char DAT_0212218c[];
extern unsigned char DAT_02122198[];
extern void *FUN_overlay_14__02121770(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_14__021219c0(void) {FUN_overlay_14__02121770((void *)DAT_02122198);FUN_0200c594((void *)DAT_02122198,(void *)DAT_02121795,(void *)DAT_0212218c);}
