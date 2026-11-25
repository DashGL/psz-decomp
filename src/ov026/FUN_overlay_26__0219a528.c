// FUN_overlay_26__0219a528 @ 0x0219a528 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219a528 @ 0x0219a528 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Test a single owner flag bit.
 * Field identities remain provisional.
 */
int FUN_overlay_26__0219a528(char *p) { return (*(unsigned int *)(p+0xd4)&0x2)!=0; }
