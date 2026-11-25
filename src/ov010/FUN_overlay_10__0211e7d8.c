// FUN_overlay_10__0211e7d8 @ 0x0211e7d8 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211e7d8 @ 0x0211e7d8 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Clear trailing state words and install words +4/+8; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_10__0211e7d8(unsigned int *self,unsigned int a,unsigned int b) { self[3]=0; self[4]=0; self[1]=a; self[2]=b; return self; }
