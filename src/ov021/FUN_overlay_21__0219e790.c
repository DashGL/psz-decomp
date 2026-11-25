// FUN_overlay_21__0219e790 @ 0x0219e790 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219e790 @ 0x0219e790 (code 0x38, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize four owner-record modes and local state.
 * Field identities remain provisional.
 */
void FUN_overlay_21__0219e790(unsigned int *p) {int i;p[4]=((unsigned int *)p[1])[59];p[3]=0;for(i=0;i<4;i++)((unsigned int *)(p[4]+i*188))[7]=1;p[6]=~0U;p[5]=~0U;p[9]=*(unsigned int *)0x020fc988;((unsigned short *)p)[14]=0;p[8]=0;}
