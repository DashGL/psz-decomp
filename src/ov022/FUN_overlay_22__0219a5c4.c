// FUN_overlay_22__0219a5c4 @ 0x0219a5c4 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a5c4 @ 0x0219a5c4 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Compute bounded ratio from two signed arguments, then transform it.
 * Field identities and high-level API contracts remain provisional.
 */
extern int FUN_overlay_22__0219a594(int,int),FUN_overlay_22__0219a5d0(int);
int FUN_overlay_22__0219a5c4(int value,int total) { return FUN_overlay_22__0219a5d0(FUN_overlay_22__0219a594(value,total)); }
