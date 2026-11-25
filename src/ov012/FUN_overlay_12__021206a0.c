// FUN_overlay_12__021206a0 @ 0x021206a0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__021206a0 @ 0x021206a0 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Short-circuit true for owner word +30, else ask one-argument helper.
 * Field identities and high-level API contracts remain provisional.
 */
extern int FUN_overlay_12__021206b4(void *);
int FUN_overlay_12__021206a0(unsigned int *self) { if(self[12]) return 1; return FUN_overlay_12__021206b4(self); }
