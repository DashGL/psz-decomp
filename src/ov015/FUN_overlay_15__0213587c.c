// FUN_overlay_15__0213587c @ 0x0213587c (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__0213587c @ 0x0213587c (code 0x8, pool extent 0x8, thumb)
// check: vers=2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Unchecked eight-byte record lookup through word +8.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
void *FUN_overlay_15__0213587c(char *self,unsigned int index) { return *(char **)(self+8)+8*index; }
