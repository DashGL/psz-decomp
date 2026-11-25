// FUN_overlay_12__0212f410 @ 0x0212f410 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212f410 @ 0x0212f410 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Only state four performs transition helper and returns true.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__0212f090(void *);
int FUN_overlay_12__0212f410(unsigned int *self) { if(self[16]!=4) return 0; FUN_overlay_12__0212f090(self); return 1; }
