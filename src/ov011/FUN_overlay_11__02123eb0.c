// flags: -O4,p
// FUN_overlay_11__02123eb0 @ 0x02123eb0 (code 0x14, pool extent 0x20, thumb)
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Construct static module object then register its destructor and registration node.
 * Field identities and high-level API contracts remain provisional.
 */
extern unsigned char DAT_02124b10[];
extern unsigned char DAT_02124b1c[];
extern void FUN_overlay_11__02122574(void *);
extern void FUN_overlay_11__02122598(void *);
extern void FUN_0200c594(void *,void (*)(void *),void *);
void FUN_overlay_11__02123eb0(void) { FUN_overlay_11__02122574((void *)DAT_02124b1c); FUN_0200c594((void *)DAT_02124b1c,FUN_overlay_11__02122598,(void *)DAT_02124b10); }
