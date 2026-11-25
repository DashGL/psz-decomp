// FUN_overlay_12__0212a818 @ 0x0212a818 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212a818 @ 0x0212a818 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Run two object cleanup stages in order.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__02131de0(void *),FUN_overlay_12__0212a828(void *);
void FUN_overlay_12__0212a818(void *self) { FUN_overlay_12__02131de0(self); FUN_overlay_12__0212a828(self); }
