// FUN_overlay_15__02127f30 @ 0x02127f30 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02127f30 @ 0x02127f30 (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Truncate index to 16 bits, fetch relative offset and add base pointer.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_15__02127f30(void **self,unsigned int index) { return (char *)self[1]+((unsigned int *)self[0])[(unsigned short)index]; }
