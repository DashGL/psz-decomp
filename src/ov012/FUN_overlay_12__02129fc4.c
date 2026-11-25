// FUN_overlay_12__02129fc4 @ 0x02129fc4 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02129fc4 @ 0x02129fc4 (code 0xa, pool extent 0xa, thumb)
// check: vers=2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* ABI review: resident getters read globals/hardware and take no arguments.
 * USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Call object accessor and return embedded +10.
 * Field identities and high-level API contracts remain provisional.
 */
extern char *FUN_02086e3c(void);
void *FUN_overlay_12__02129fc4(void) { return FUN_02086e3c()+16; }
