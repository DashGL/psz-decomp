// FUN_overlay_12__021321f4 @ 0x021321f4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021321f4 @ 0x021321f4 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize four-byte descriptor then assign fixed type bytes.
 * Field identities remain provisional.
 */
extern void FUN_02045848(void *);
void FUN_overlay_12__021321f4(unsigned char *p) {FUN_02045848(p);p[0]=3;p[1]=3;p[2]=39;p[3]=0;}
