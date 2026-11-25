// FUN_overlay_13__0211f92c @ 0x0211f92c (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211f92c @ 0x0211f92c (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Clean embedded subobject and return original receiver.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_13__0211f01c(void *);
void *FUN_overlay_13__0211f92c(char *self) { FUN_overlay_13__0211f01c(self+0x20); return self; }
