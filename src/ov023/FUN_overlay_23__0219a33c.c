// FUN_overlay_23__0219a33c @ 0x0219a33c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219a33c @ 0x0219a33c (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Add absolute signed halfword amount to two receiver accumulators.
 * Field identities remain provisional.
 */
extern int FUN_02000ec4(int);
void FUN_overlay_23__0219a33c(int *p,const short *amount) {int value=FUN_02000ec4(*amount);p[32]+=value;p[51]+=value;}
