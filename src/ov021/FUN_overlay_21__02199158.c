// FUN_overlay_21__02199158 @ 0x02199158 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_21__02199158 @ 0x02199158 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Require readiness for four active records lacking bypass field.
 * Field identities remain provisional.
 */
int FUN_overlay_21__02199158(void **p) {int i;for(i=0;i<4;i++){unsigned int *r=(unsigned int *)((char *)p[59]+i*188);if(!r[9] && r[5]!=~0U && r[5]!=12 && !r[32])return 0;}return 1;}
