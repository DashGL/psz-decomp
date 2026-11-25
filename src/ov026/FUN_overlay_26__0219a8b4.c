// FUN_overlay_26__0219a8b4 @ 0x0219a8b4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219a8b4 @ 0x0219a8b4 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Conditionally select owner value from fourth argument, then update if local state zero.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int),FUN_overlay_26__0219a9e4(void *);
void FUN_overlay_26__0219a8b4(unsigned int *p,unsigned int a,unsigned int b,unsigned int value) { if(value!=~0U)FUN_02037910(p,p[17]); if(p[20]==0)FUN_overlay_26__0219a9e4(p); }
