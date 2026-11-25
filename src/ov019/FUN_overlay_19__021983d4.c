// FUN_overlay_19__021983d4 @ 0x021983d4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__021983d4 @ 0x021983d4 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Return prior low-bit status and clear that owner flag.
 * Field identities remain provisional.
 */
int FUN_overlay_19__021983d4(unsigned int *p) { int had=(p[53]&1)!=0; p[53]&=~1U; return had; }
