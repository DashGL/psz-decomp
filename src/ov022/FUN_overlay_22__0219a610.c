// FUN_overlay_22__0219a610 @ 0x0219a610 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a610 @ 0x0219a610 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Transform owner ratio using two reviewed integer functions.
 * Field identities remain provisional.
 */
extern int FUN_overlay_22__0219a594(int,int),FUN_overlay_22__0219a5d0(int);
int FUN_overlay_22__0219a610(int *p) { return FUN_overlay_22__0219a5d0(FUN_overlay_22__0219a594(p[18],p[19])); }
