// FUN_overlay_12__02128318 @ 0x02128318 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128318 @ 0x02128318 (code 0x8, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Install dispatch table and store second argument; returns self.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
void *FUN_overlay_12__02128318(void **self,void *value) { self[0]=(void *)0x0213df58; self[1]=value; return self; }
