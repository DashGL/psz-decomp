// FUN_overlay_12__0212f424 @ 0x0212f424 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212f424 @ 0x0212f424 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Complete ready receiver transition and select next state from alternate flag.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02131fd0(void *,int);
int FUN_overlay_12__0212f424(int *p) {if(p[16]!=4)return 0;if(p[18]>0){FUN_overlay_12__02131fd0(p,0);p[16]=p[17]==0?5:6;return 1;}return 0;}
