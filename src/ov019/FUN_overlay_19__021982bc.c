// FUN_overlay_19__021982bc @ 0x021982bc (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__021982bc @ 0x021982bc (code 0x76, pool extent 0x80, thumb)
// check: vers=2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Consume three event flags and report whether any were present.
 * Field identities remain provisional.
 */
int FUN_overlay_19__021982bc(volatile unsigned int *p) {int result=0;result|=(p[53]&128)!=0;p[53]&=~128U;result|=(p[53]&4096)!=0;p[53]&=~4096U;result|=(p[53]&512)!=0;p[53]&=~512U;return result;}
