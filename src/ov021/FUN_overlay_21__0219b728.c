// FUN_overlay_21__0219b728 @ 0x0219b728 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219b728 @ 0x0219b728 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Forward two live constructor parameters, install derived table and return receiver.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_21__0219b6c4(void *,unsigned int,unsigned int);
void *FUN_overlay_21__0219b728(unsigned int *self,unsigned int a,unsigned int b) { FUN_overlay_21__0219b6c4(self,a,b); self[0]=0x021a13cc; return self; }
