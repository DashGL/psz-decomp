// FUN_overlay_26__0219a44c @ 0x0219a44c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219a44c @ 0x0219a44c (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize base with fixed mode and forwarded owner, install dispatch and clear extended flag.
 * Field identities remain provisional.
 */
extern void FUN_020352dc(void *,unsigned int,unsigned int);
void *FUN_overlay_26__0219a44c(unsigned int *p,unsigned int owner) { FUN_020352dc(p,owner,17); p[0]=0x219b73c; p[53]=0; return p; }
