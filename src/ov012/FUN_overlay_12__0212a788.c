// FUN_overlay_12__0212a788 @ 0x0212a788 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212a788 @ 0x0212a788 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke input-free operation only when module object exists and state +40 equals one.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__02129d84(void);
void FUN_overlay_12__0212a788(void) { unsigned int *object=*(unsigned int **)0x0213f2c0; if(object && object[16]==1) FUN_overlay_12__02129d84(); }
