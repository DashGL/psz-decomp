// FUN_overlay_19__0219adf8 @ 0x0219adf8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219adf8 @ 0x0219adf8 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Call module base initializer, install derived dispatch table and return self.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_19__0219ac28(void *);
void *FUN_overlay_19__0219adf8(unsigned int *self) { FUN_overlay_19__0219ac28(self); self[0]=0x0219d454; return self; }
