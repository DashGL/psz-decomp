// FUN_overlay_10__0212016c @ 0x0212016c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__0212016c @ 0x0212016c (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Return embedded +90 of optional global object.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_10__0212016c(void) { char *object=*(char **)0x02122d84; if(object) object+=0x90; return object; }
