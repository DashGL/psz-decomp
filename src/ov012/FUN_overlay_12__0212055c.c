// FUN_overlay_12__0212055c @ 0x0212055c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212055c @ 0x0212055c (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Select word at +3dc+288*index and store into word +14; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__0212055c(char *self,unsigned int index) { *(unsigned int *)(self+20)=*(unsigned int *)(self+0x3dc+288*index); return self; }
