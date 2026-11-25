// FUN_overlay_20__021990c8 @ 0x021990c8 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_20__021990c8 @ 0x021990c8 (code 0xa, pool extent 0xa, thumb)
// check: vers=2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Store child halfword.
 * Field identities remain provisional.
 */
void FUN_overlay_20__021990c8(void **p,unsigned int value) {*(unsigned short *)((char *)p[53]+0x72)=value;}
