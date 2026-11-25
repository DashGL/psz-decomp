// FUN_overlay_21__0219d554 @ 0x0219d554 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219d554 @ 0x0219d554 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Disable child component, increment child counter and mark related receiver active.
 * Field identities remain provisional.
 */
extern void FUN_02043ea4(void *,unsigned int,int);
void FUN_overlay_21__0219d554(unsigned int *p) {unsigned int *child=(unsigned int *)p[1];FUN_02043ea4(child,p[3],0);child[160]++;((unsigned int *)p[2])[32]=1;}
