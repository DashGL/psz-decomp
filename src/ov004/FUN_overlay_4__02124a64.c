// FUN_overlay_4__02124a64 @ 0x02124a64 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__02124a64 @ 0x02124a64 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Transfer nonnegative pending value then reset both pending slots.
 * Field identities remain provisional.
 */
void FUN_overlay_4__02124a64(int *p) {int value=p[60];if(value<0)value=0;p[58]=value;p[59]=-1;p[60]=-1;}
