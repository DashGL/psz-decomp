// FUN_overlay_19__02198a50 @ 0x02198a50 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198a50 @ 0x02198a50 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Store halfword 8000 at receiver +18c; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_19__02198a50(char *self) { *(unsigned short *)(self+0x18c)=0x8000; return self; }
