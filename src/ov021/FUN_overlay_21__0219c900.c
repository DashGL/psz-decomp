// FUN_overlay_21__0219c900 @ 0x0219c900 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219c900 @ 0x0219c900 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base receiver using all three incoming inputs and initialize six handle fields.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_21__0219b6c4(void *,unsigned int,unsigned int);
void *FUN_overlay_21__0219c900(unsigned int *p,unsigned int a,unsigned int b) {FUN_overlay_21__0219b6c4(p,a,b);p[0]=0x021a1524;p[3]=-1u;p[4]=-1u;p[5]=-1u;p[6]=0;p[7]=-1u;p[8]=-1u;p[9]=-1u;return p;}
