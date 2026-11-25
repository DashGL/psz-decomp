// FUN_overlay_7__0211f940 @ 0x0211f940 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_7__0211f940 @ 0x0211f940 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Emit state value packet or clear alternate receiver word.
 * Field identities remain provisional.
 */
int FUN_overlay_7__0211f940(unsigned int *p,unsigned short *out) {if(p[39]==0){out[0]=5;out[1]=0;*(unsigned int *)(out+2)=p[38];}else p[41]=0;return 1;}
