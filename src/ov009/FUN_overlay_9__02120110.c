// FUN_overlay_9__02120110 @ 0x02120110 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__02120110 @ 0x02120110 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Choose code from two receiver flags.
 * Field identities remain provisional.
 */
int FUN_overlay_9__02120110(unsigned int *p) {int code=7;if(p[2]!=1){if(!p[1])code=5;else code=6;}return code;}
