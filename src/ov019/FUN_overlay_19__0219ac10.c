// FUN_overlay_19__0219ac10 @ 0x0219ac10 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219ac10 @ 0x0219ac10 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize base, install derived table and clear fourth word.
 * Field identities remain provisional.
 */
extern void FUN_overlay_19__0219ac28(void *);
void *FUN_overlay_19__0219ac10(unsigned int *p) { FUN_overlay_19__0219ac28(p); p[0]=0x0219d518; p[3]=0; return p; }
