// FUN_overlay_12__02129fd8 @ 0x02129fd8 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02129fd8 @ 0x02129fd8 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* ABI review: resident getters read globals/hardware and take no arguments.
 * USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve object then invoke its helper.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_02086e3c(void);
extern unsigned int FUN_020870c4(void *);
unsigned int FUN_overlay_12__02129fd8(void) { return FUN_020870c4(FUN_02086e3c()); }
