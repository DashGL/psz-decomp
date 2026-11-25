// FUN_overlay_19__021988f8 @ 0x021988f8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__021988f8 @ 0x021988f8 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Report any of three independent flag bits.
 * Field identities remain provisional.
 */
int FUN_overlay_19__021988f8(unsigned int *p) {unsigned int flags=p[53];if(flags&0x20)return 1;if(flags&0x4000)return 1;if(flags&0x8000)return 1;return 0;}
