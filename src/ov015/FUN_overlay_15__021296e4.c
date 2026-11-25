// FUN_overlay_15__021296e4 @ 0x021296e4 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__021296e4 @ 0x021296e4 (code 0x34, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Set five display priority fields to three.
 * Field identities remain provisional.
 */
void FUN_overlay_15__021296e4(void) {volatile unsigned short *a=(volatile unsigned short *)0x04001008,*b=(volatile unsigned short *)0x04000008;a[0]=(a[0]&~3U)|3;a[1]=(a[1]&~3U)|3;b[0]=(b[0]&~3U)|3;b[1]=(b[1]&~3U)|3;b[2]=(b[2]&~3U)|3;}
