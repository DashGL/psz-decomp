// FUN_overlay_21__0219d3a0 @ 0x0219d3a0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219d3a0 @ 0x0219d3a0 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Forward two base arguments then install derived dispatch and three sentinel fields.
 * Field identities remain provisional.
 */
extern void FUN_overlay_21__0219b6c4(void *,unsigned int,unsigned int);
void *FUN_overlay_21__0219d3a0(unsigned int *p,unsigned int a,unsigned int b) { FUN_overlay_21__0219b6c4(p,a,b); p[0]=0x021a15d4; p[3]=~0U; p[4]=~0U; p[5]=~0U; return p; }
