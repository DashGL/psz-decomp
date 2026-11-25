// FUN_overlay_11__021200a8 @ 0x021200a8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__021200a8 @ 0x021200a8 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Advance buffer cursor +384 by 56, then copy 56 bytes from old cursor to new cursor.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_020655d8(const void *,void *,unsigned int);
void FUN_overlay_11__021200a8(char *self) { char *old=*(char **)(self+0x384); *(char **)(self+0x384)=old+56; FUN_020655d8(old,*(void **)(self+0x384),56); }
