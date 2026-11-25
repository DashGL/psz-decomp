// FUN_overlay_31__0219a750 @ 0x0219a750 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a750 @ 0x0219a750 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Clear twenty-five slots and publish module pointer.
 * Field identities remain provisional.
 */
void *FUN_overlay_31__0219a750(unsigned int *p) { int i; for(i=0;i<25;i++)p[i]=0; *(unsigned int **)0x0219d0a0=p; return p; }
