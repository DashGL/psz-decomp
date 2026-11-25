// flags: -O4,p
// FUN_overlay_5__0211e9e4 @ 0x0211e9e4 (code 0x14, pool extent 0x20, thumb)
/* USA overlay 5 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register callback address in resident exit list; registration only stores pointer values.
 * Field identities remain provisional.
 */
extern unsigned char DAT_0211e981[];
extern unsigned char DAT_0211eaa0[];
extern unsigned char DAT_0211eaac[];
extern void *FUN_overlay_5__0211e680(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_5__0211e9e4(void) {FUN_overlay_5__0211e680((void *)DAT_0211eaac);FUN_0200c594((void *)DAT_0211eaac,(void *)DAT_0211e981,(void *)DAT_0211eaa0);}
