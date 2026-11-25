// FUN_overlay_13__0211ed10 @ 0x0211ed10 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211ed10 @ 0x0211ed10 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Emit packet unless terminal state or active secondary mode.
 * Field identities remain provisional.
 */
int FUN_overlay_13__0211ed10(unsigned int *p,unsigned short *out) {if(p[2]==3)return 0;if(p[2]==0 || p[1]!=1){out[0]=8;out[1]=0;*(unsigned int *)(out+2)=p[1];return 1;}return 0;}
