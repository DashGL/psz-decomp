// FUN_overlay_21__0219d440 @ 0x0219d440 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219d440 @ 0x0219d440 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Mark child state as sentinel when owner indexed slot is empty.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,unsigned int);
void FUN_overlay_21__0219d440(unsigned int *p) { unsigned int *child=(unsigned int *)p[2]; if(FUN_02040d2c((void *)p[1],p[3]))child[6]=~0U; }
