// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_12__021228ec @ 0x021228ec (code 0x14, pool extent 0x18, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Compare signed owner byte +4 against signed module threshold.
 * Field identities and high-level API contracts remain provisional.
 */
extern int D_0213ec9c[];
int FUN_overlay_12__021228ec(signed char *self) { return self[4]>=D_0213ec9c[1]; }
