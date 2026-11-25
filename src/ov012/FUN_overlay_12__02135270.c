// FUN_overlay_12__02135270 @ 0x02135270 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135270 @ 0x02135270 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Map seven selector values to five categories, returning minus one outside range.
 * Field identities remain provisional.
 */
int FUN_overlay_12__02135270(unsigned int selector) {switch(selector) {case 0:case 1:case 2:return 0;case 3:return 1;case 4:return 2;case 5:return 4;case 6:return 5;default:return -1;}}
