// FUN_overlay_4__0211f9f4 @ 0x0211f9f4 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__0211f9f4 @ 0x0211f9f4 (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Render marker at fixed coordinates when receiver flag is set.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_4__0211f9f4(int *p) {if(p[12]&2){int d[4];FUN_02071d0c(d);*(short *)d=0;d[2]=20480;d[3]=806912;FUN_020c32b4(d,p[0]);}}
