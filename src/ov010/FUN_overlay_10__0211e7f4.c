// FUN_overlay_10__0211e7f4 @ 0x0211e7f4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211e7f4 @ 0x0211e7f4 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Increment signed circular counter while below period-minus-one, otherwise wrap zero; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_10__0211e7f4(int *self) { int limit=self[2]-1; int current=self[4]; if(current<limit) current++; else current=0; self[4]=current; return self; }
