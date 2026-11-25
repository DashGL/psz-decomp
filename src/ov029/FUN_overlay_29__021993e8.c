// FUN_overlay_29__021993e8 @ 0x021993e8 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_29__021993e8 @ 0x021993e8 (code 0xa, full extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete virtual event forwarding; ABI resolved through constructors and vtables.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch564.md.
 */
typedef void (*Dispatch)(void *,unsigned);
void FUN_overlay_29__021993e8(void *self,unsigned event) { ((Dispatch)(*(unsigned **)self)[11])(self,event); }
