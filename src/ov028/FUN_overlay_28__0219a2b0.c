// FUN_overlay_28__0219a2b0 @ 0x0219a2b0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a2b0 @ 0x0219a2b0 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize receiver-only base, install dispatch and clear four fields.
 * Field identities remain provisional.
 */
extern void FUN_overlay_28__021988f4(void *);
void *FUN_overlay_28__0219a2b0(unsigned int *p) { FUN_overlay_28__021988f4(p); p[0]=0x0219c2d4; p[3]=0; p[4]=0; p[5]=0; p[6]=0; return p; }
