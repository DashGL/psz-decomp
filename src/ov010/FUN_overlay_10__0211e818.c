// FUN_overlay_10__0211e818 @ 0x0211e818 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211e818 @ 0x0211e818 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Increment signed circular counter while below period-minus-one, otherwise wrap zero; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_10__0211e818(int *self) { int limit=self[1]-1; int current=self[3]; if(current<limit) current++; else current=0; self[3]=current; return self; }
