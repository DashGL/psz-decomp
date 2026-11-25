// FUN_overlay_28__02199cb8 @ 0x02199cb8 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_28__02199cb8 @ 0x02199cb8 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Apply owner mode and enable slot one.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int),FUN_02043ea4(void *,int,int);
void FUN_overlay_28__02199cb8(void **p) {void *owner=p[1];FUN_02040c0c(owner,0,8,0x1000,0);FUN_02043ea4(owner,1,1);}
