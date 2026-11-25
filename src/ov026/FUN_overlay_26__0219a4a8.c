// FUN_overlay_26__0219a4a8 @ 0x0219a4a8 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219a4a8 @ 0x0219a4a8 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Run one-argument owner operation only for selected event code.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_26__0219a540(void *);
void FUN_overlay_26__0219a4a8(void *self,int event) { if(event==2) FUN_overlay_26__0219a540(self); }
