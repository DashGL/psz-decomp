// FUN_overlay_20__0219a2a4 @ 0x0219a2a4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219a2a4 @ 0x0219a2a4 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Set owner value from extended field and lock flag.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int);
void FUN_overlay_20__0219a2a4(unsigned int *p) { FUN_02037910(p,p[54]); p[11]|=1; }
