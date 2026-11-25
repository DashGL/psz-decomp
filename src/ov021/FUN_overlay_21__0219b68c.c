// FUN_overlay_21__0219b68c @ 0x0219b68c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219b68c @ 0x0219b68c (code 0x2e, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Set mode-dependent four-field receiver configuration.
 * Field identities remain provisional.
 */
void FUN_overlay_21__0219b68c(unsigned int *p,int mode) {if(mode==0){p[13]=7;p[14]=7;p[15]=2;p[16]=*(unsigned int *)0x021a1318;}else if(mode==1){p[13]=10;p[14]=6;p[15]=2;p[16]=*(unsigned int *)0x020fc988;}}
