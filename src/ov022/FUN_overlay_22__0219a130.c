// FUN_overlay_22__0219a130 @ 0x0219a130 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a130 @ 0x0219a130 (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Tail-forward owner word +4 and indirect identifier from +c.
 * Field identities and high-level API contracts remain provisional.
 */
extern unsigned int FUN_02040d44(void *,unsigned int);
unsigned int FUN_overlay_22__0219a130(void **self) { return FUN_02040d44(self[1],*(unsigned int *)self[3]); }
