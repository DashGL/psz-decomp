// FUN_overlay_14__0211fd64 @ 0x0211fd64 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211fd64 @ 0x0211fd64 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Release owned allocation if present and clear pointer.
 * Field identities remain provisional.
 */
extern void FUN_020ba8b4(void *);
void *FUN_overlay_14__0211fd64(void **p) {if(*p){FUN_020ba8b4(*p);*p=0;}return p;}
