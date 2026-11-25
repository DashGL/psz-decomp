// FUN_overlay_29__0219a730 @ 0x0219a730 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a730 @ 0x0219a730 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Run two owner update stages in order.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_29__0219a740(void *),FUN_overlay_29__0219a9d8(void *);
void FUN_overlay_29__0219a730(void *self) { FUN_overlay_29__0219a740(self); FUN_overlay_29__0219a9d8(self); }
