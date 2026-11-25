// FUN_overlay_17__0211ff64 @ 0x0211ff64 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211ff64 @ 0x0211ff64 (code 0xa, pool extent 0xa, thumb)
// check: vers=2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Set active and ready words around stored value; return receiver.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_17__0211ff64(unsigned int *self,unsigned int value) { self[2]=1; self[3]=value; self[4]=1; return self; }
