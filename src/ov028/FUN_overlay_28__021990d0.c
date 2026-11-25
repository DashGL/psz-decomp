// FUN_overlay_28__021990d0 @ 0x021990d0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_28__021990d0 @ 0x021990d0 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Forward base arguments, install dispatch and set extended sentinel.
 * Field identities remain provisional.
 */
extern void FUN_020352dc(void *,unsigned int,unsigned int);
void *FUN_overlay_28__021990d0(unsigned int *p,unsigned int a,unsigned int b) { FUN_020352dc(p,a,b); p[0]=0x0219c050; p[53]=~0U; return p; }
