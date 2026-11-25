// FUN_overlay_12__0212d470 @ 0x0212d470 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d470 @ 0x0212d470 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Forward caller value as fourth parameter with three fixed-point constants.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__0212d4ac(unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_12__0212d470(unsigned int value) { FUN_overlay_12__0212d4ac(0x41000,0x84000,0xf7000,value); }
