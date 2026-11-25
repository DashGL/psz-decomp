// flags: -O4,p
// FUN_overlay_3__0211ee1c @ 0x0211ee1c (code 0x14, pool extent 0x20, thumb)
/* USA overlay 3 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register callback address in resident exit list; registration only stores pointer values.
 * Field identities remain provisional.
 */
extern unsigned char DAT_0211eda9[];
extern unsigned char DAT_0211ef60[];
extern unsigned char DAT_0211ef6c[];
extern void *FUN_overlay_3__0211e684(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_3__0211ee1c(void) {FUN_overlay_3__0211e684((void *)DAT_0211ef6c);FUN_0200c594((void *)DAT_0211ef6c,(void *)DAT_0211eda9,(void *)DAT_0211ef60);}
