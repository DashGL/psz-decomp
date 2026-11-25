// FUN_overlay_29__0219aad8 @ 0x0219aad8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219aad8 @ 0x0219aad8 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Scale input displacement by speed, add current position and apply result.
 * Field identities remain provisional.
 */
extern int FUN_02036c34(void *);
extern void FUN_02091cc0(void *,const void *,const void *);
extern void FUN_0203647c(void *,const void *,const void *);
extern void FUN_02036384(void *,const void *);
void FUN_overlay_29__0219aad8(int *p,const int *v) {int speed,scaled[3],sum[3];speed=FUN_02036c34(p);FUN_02091cc0(scaled,v,&speed);FUN_0203647c(sum,p+14,scaled);FUN_02036384(p,sum);}
