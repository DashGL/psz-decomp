// FUN_overlay_12__02120938 @ 0x02120938 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120938 @ 0x02120938 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize base and install derived dispatch table; return self.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__021209d8(void *);
void *FUN_overlay_12__02120938(unsigned int *self) { FUN_overlay_12__021209d8(self); self[0]=0x0213d37c; return self; }
