// FUN_overlay_26__021996e0 @ 0x021996e0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_26__021996e0 @ 0x021996e0 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base and initialize derived mode offset and state.
 * Field identities remain provisional.
 */
extern void FUN_020352dc(void *,unsigned int,unsigned int);
void *FUN_overlay_26__021996e0(unsigned int *p,unsigned int owner,unsigned int mode) {FUN_020352dc(p,owner,mode);p[0]=0x0219b594;p[54]=0;p[53]=mode-19;return p;}
