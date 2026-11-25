// FUN_overlay_12__0211f7e0 @ 0x0211f7e0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211f7e0 @ 0x0211f7e0 (code 0x12, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return field +cb8 of optional module object.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__0211f7e0(void) { char *object=*(char **)0x0213ec98; if(object) return *(void **)(object+0xcb8); return 0; }
