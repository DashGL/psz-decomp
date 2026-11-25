// FUN_overlay_14__02120b78 @ 0x02120b78 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120b78 @ 0x02120b78 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Map receiver state to optional two-halfword output and report whether handled.
 * Field identities remain provisional.
 */
int FUN_overlay_14__02120b78(unsigned int *p,short *out) {int handled=0;switch(p[4]) {case 0:case 1:case 5:out[0]=4;out[1]=2;handled=1;break;case 3:out[0]=4;out[1]=0;handled=1;break;}return handled;}
