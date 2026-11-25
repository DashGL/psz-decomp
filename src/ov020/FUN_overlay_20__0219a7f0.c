// FUN_overlay_20__0219a7f0 @ 0x0219a7f0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219a7f0 @ 0x0219a7f0 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Store rounded fixed-point square and set corresponding validity bit.
 * Field identities remain provisional.
 */
void FUN_overlay_20__0219a7f0(unsigned int *p,int value) {p[2]=(unsigned int)(((long long)value*value+2048)>>12);p[7]|=2;}
