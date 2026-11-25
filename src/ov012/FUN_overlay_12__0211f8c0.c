// FUN_overlay_12__0211f8c0 @ 0x0211f8c0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211f8c0 @ 0x0211f8c0 (code 0x26, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Refresh rows, configure remaining scroll window and mark initialized.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0211f8f0(void *);
extern void FUN_overlay_12__0211f870(void *,int,int,int);
void FUN_overlay_12__0211f8c0(int *p) {FUN_overlay_12__0211f8f0(p);FUN_overlay_12__0211f870((char *)p+0xbcc,p[109],8-p[4],p[2]);*(int *)((char *)p+0xbdc)=1;}
