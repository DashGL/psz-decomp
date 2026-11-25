// FUN_overlay_15__02127e18 @ 0x02127e18 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02127e18 @ 0x02127e18 (code 0x8, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store paired words in module global; leaves incoming r0 unchanged.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
unsigned int FUN_overlay_15__02127e18(unsigned int a,unsigned int b) { unsigned int *state=(unsigned int *)0x0213e7ec; state[6]=a; state[7]=b; return a; }
