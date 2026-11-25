// FUN_overlay_17__0211fa34 @ 0x0211fa34 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211fa34 @ 0x0211fa34 (code 0x8, pool extent 0x8, thumb)
// check: vers=2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Store word at owner +388; returns unchanged receiver.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
void *FUN_overlay_17__0211fa34(char *self,unsigned int value) { *(unsigned int *)(self+0x388)=value; return self; }
