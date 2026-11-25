// FUN_overlay_12__0212a458 @ 0x0212a458 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212a458 @ 0x0212a458 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Free optional resident-global allocation and clear pointer.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_020ba8ac(void *);
void FUN_overlay_12__0212a458(void) { void *object=*(void **)0x0211a9a4; if(object) { FUN_020ba8ac(object); *(void **)0x0211a9a4=0; } }
