// flags: -O4,p
// FUN_overlay_10__02122438 @ 0x02122438 (code 0x14, pool extent 0x20, thumb)
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Construct static module object then register its destructor and registration node.
 * Field identities and high-level API contracts remain provisional.
 */
extern unsigned char DAT_02122d98[];
extern unsigned char DAT_02122da4[];
extern void FUN_overlay_10__021217a4(void *);
extern void FUN_overlay_10__021217d0(void *);
extern void FUN_0200c594(void *,void (*)(void *),void *);
void FUN_overlay_10__02122438(void) { FUN_overlay_10__021217a4((void *)DAT_02122da4); FUN_0200c594((void *)DAT_02122da4,FUN_overlay_10__021217d0,(void *)DAT_02122d98); }
