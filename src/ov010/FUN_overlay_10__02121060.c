// FUN_overlay_10__02121060 @ 0x02121060 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__02121060 @ 0x02121060 (code 0x8, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Store paired words into module global +2c/+30.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
void FUN_overlay_10__02121060(unsigned int a,unsigned int b) { unsigned int *state=(unsigned int *)0x02122da4; state[11]=a; state[12]=b; }
