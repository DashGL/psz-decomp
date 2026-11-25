// FUN_overlay_12__0212b48c @ 0x0212b48c (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212b48c @ 0x0212b48c (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Check selected entry availability only when identifier exists and pending flag is clear.
 * Field identities remain provisional.
 */
extern void *FUN_02086150(int);
extern int FUN_02073218(int);
int FUN_overlay_12__0212b48c(int *p) {if(p[111]!=-1 && !p[117] && FUN_02086150(p[111]))return FUN_02073218(p[111]);return 0;}
