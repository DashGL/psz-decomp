// FUN_overlay_15__021318e4 @ 0x021318e4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__021318e4 @ 0x021318e4 (code 0x1e, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy thirty-two bytes into global receiver buffer and clear completion byte.
 * Field identities remain provisional.
 */
extern void FUN_02065774(const void *,void *,unsigned int);
void FUN_overlay_15__021318e4(const void *source) {char **g=(char **)0x0213e8c4;FUN_02065774(source,*g+1088,32);(*g)[1255]=0;}
