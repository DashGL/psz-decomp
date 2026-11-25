// FUN_overlay_17__0211fdf0 @ 0x0211fdf0 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211fdf0 @ 0x0211fdf0 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Set state and value then clear trailing word.
 * Field identities remain provisional.
 */
void FUN_overlay_17__0211fdf0(unsigned int *p,unsigned int value) {p[2]=1;p[3]=value;p[4]=0;}
