// FUN_overlay_21__0219b7c0 @ 0x0219b7c0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219b7c0 @ 0x0219b7c0 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Transition child state to two when owner slot query succeeds.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,unsigned int);
void FUN_overlay_21__0219b7c0(void **p) { unsigned int *child=p[2]; if(FUN_02040d2c(p[1],child[10]))child[6]=2; }
