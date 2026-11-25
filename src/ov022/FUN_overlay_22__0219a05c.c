// FUN_overlay_22__0219a05c @ 0x0219a05c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a05c @ 0x0219a05c (code 0xe, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Tail-forward owner, indirect identifier and original second argument.
 * Field identities and high-level API contracts remain provisional.
 */
extern unsigned int FUN_02043ea4(void *,unsigned int,unsigned int);
unsigned int FUN_overlay_22__0219a05c(void **self,unsigned int value) { return FUN_02043ea4(self[1],*(unsigned int *)self[3],value); }
