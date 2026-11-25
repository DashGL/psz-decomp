// FUN_overlay_20__0219b1d4 @ 0x0219b1d4 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219b1d4 @ 0x0219b1d4 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke resident owner operation with selector zero, mode four, fixed-point one and final zero option.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_20__0219b1d4(void **self) { FUN_02040c0c(self[1],0,4,0x1000,0); }
