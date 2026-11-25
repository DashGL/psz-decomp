// FUN_overlay_9__0211f8ac @ 0x0211f8ac (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f8ac @ 0x0211f8ac (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Emit mode-specific packet and clear state for mode zero.
 * Field identities remain provisional.
 */
int FUN_overlay_9__0211f8ac(unsigned int *p,unsigned short *out) {switch(p[1]){case 0:out[0]=4;out[1]=4;p[4]=0;break;case 1:out[0]=7;out[1]=8;break;case 2:out[0]=11;out[1]=1;break;}return 1;}
