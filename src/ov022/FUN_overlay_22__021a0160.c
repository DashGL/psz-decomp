// FUN_overlay_22__021a0160 @ 0x021a0160 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0160 @ 0x021a0160 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Copy six signed bytes in observed order.
 * Field identities remain provisional.
 */
void *FUN_overlay_22__021a0160(signed char *p,const signed char *in) {p[0]=in[0];p[1]=in[1];p[2]=in[2];p[3]=in[3];p[4]=in[4];p[5]=in[5];return p;}
