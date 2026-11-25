// FUN_overlay_19__02198360 @ 0x02198360 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198360 @ 0x02198360 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Return prior flag state and clear flag through a second field read.
 * Field identities remain provisional.
 */
int FUN_overlay_19__02198360(volatile unsigned int *p) {int was=(p[53]&16)!=0;p[53]&=~16U;return was;}
