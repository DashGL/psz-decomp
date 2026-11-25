// FUN_overlay_12__0212ea84 @ 0x0212ea84 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212ea84 @ 0x0212ea84 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Activate pending list only in state one with idle flag and positive count.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212e764(void *);
int FUN_overlay_12__0212ea84(int *p) {if(p[16]!=1)return 0;if(p[17]==0&&p[23]>0){FUN_overlay_12__0212e764(p);return 1;}return 0;}
