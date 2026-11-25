// flags: -O4,p
// FUN_overlay_15__02129d18 @ 0x02129d18 (code 0x18, pool extent 0x20, thumb)
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Advance wrapping byte timer and register callback at threshold.
 * Field identities remain provisional.
 */
extern unsigned char DAT_02129cad[];
extern unsigned char DAT_0213e83c[];
extern void FUN_overlay_15__02127de4(void *);
void FUN_overlay_15__02129d18(void) {unsigned char *p=DAT_0213e83c;++*p;if(*p>=120)FUN_overlay_15__02127de4((void *)DAT_02129cad);}
