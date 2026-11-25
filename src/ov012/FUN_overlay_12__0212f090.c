// FUN_overlay_12__0212f090 @ 0x0212f090 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212f090 @ 0x0212f090 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Enter state seven and dispatch close or open mode according to receiver response.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212e044(void *);
extern void FUN_overlay_12__02131fd0(void *,int);
void FUN_overlay_12__0212f090(int *p) {p[16]=7;if(p[17]==1) {FUN_overlay_12__0212e044(p);FUN_overlay_12__02131fd0(p,0);}else if(p[17]==0)FUN_overlay_12__02131fd0(p,1);}
