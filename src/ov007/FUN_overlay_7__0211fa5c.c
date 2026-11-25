// FUN_overlay_7__0211fa5c @ 0x0211fa5c (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_7__0211fa5c @ 0x0211fa5c (code 0x60, pool extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Render optional selected-row descriptor followed by fixed baseline descriptor.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_7__0211fa5c(int *p,int row) {int t[4];FUN_02071d0c(t);if(row>=0){FUN_02090b44(t);t[2]=0x15000;t[3]=(row*10+104)<<12;*(short *)t=1;FUN_020c32b4(t,p[36]);}FUN_02090b44(t);t[2]=0x14000;t[3]=0x30000;*(short *)t=0;FUN_020c32b4(t,p[36]);}
