// FUN_overlay_20__02198f20 @ 0x02198f20 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198f20 @ 0x02198f20 (code 0x8, pool extent 0x8, thumb)
// check: vers=2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Store through child at owner +d4; returns child pointer.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
void *FUN_overlay_20__02198f20(char *self,unsigned int value) { char *child=*(char **)(self+0xd4); *(unsigned int *)(child+44)=value; return child; }
