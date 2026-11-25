// FUN_overlay_0__0211ed60 @ 0x0211ed60 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_0__0211ed60 @ 0x0211ed60 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 0 reconstruction from extracted module bytes, 2026-11-04.
 * Multiply signed fixed-point operands using full64-bit product, add rounding bias and shift twelve.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_0__0211ed60(int a,int b) {return (unsigned int)(((long long)a*b+2048)>>12);}
