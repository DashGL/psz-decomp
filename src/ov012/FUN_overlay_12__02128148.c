// FUN_overlay_12__02128148 @ 0x02128148 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128148 @ 0x02128148 (code 0xa, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize dispatch pointer and clear word +4; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02128148(void **self) { self[0]=(void *)0x0213df30; self[1]=0; return self; }
