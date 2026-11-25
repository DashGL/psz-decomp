// FUN_overlay_19__0219ccd0 @ 0x0219ccd0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch61.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219ccd0 @ 0x0219ccd0 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke owner operation then clear local state.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_19__0219ccd0(unsigned int *p) { FUN_02040c0c((void *)p[1],0,2,0x1000,0); p[3]=0; }
