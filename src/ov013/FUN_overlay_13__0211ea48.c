// FUN_overlay_13__0211ea48 @ 0x0211ea48 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211ea48 @ 0x0211ea48 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Write constant halfword pair to second argument and return true.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_13__0211ea48(void *unused,unsigned short *out) { out[0]=11; out[1]=3; return 1; }
