// FUN_overlay_21__0219a7d0 @ 0x0219a7d0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219a7d0 @ 0x0219a7d0 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Clear four owner words starting at e4.
 * Field identities remain provisional.
 */
void FUN_overlay_21__0219a7d0(char *p) { int i; for(i=0;i<4;i++) *(unsigned int *)(p+0xe4+i*4)=0; }
