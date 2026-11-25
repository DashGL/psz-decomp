// flags: -O4,p
// FUN_overlay_4__0212e638 @ 0x0212e638 (code 0x14, pool extent 0x20, thumb)
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register callback address in resident exit list; registration only stores pointer values.
 * Field identities remain provisional.
 */
extern unsigned char DAT_020c3579[];
extern unsigned char DAT_02192d04[];
extern unsigned char DAT_02192d10[];
extern void *FUN_020c3564(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_4__0212e638(void) {FUN_020c3564((void *)DAT_02192d10);FUN_0200c594((void *)DAT_02192d10,(void *)DAT_020c3579,(void *)DAT_02192d04);}
