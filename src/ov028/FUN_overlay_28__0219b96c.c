// FUN_overlay_28__0219b96c @ 0x0219b96c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219b96c @ 0x0219b96c (code 0x40, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Advance state when target entity is inactive, otherwise set child animation.
 * Field identities remain provisional.
 */
extern void *FUN_020352a4(void *,int);
extern void *FUN_02039200(void *);
extern int FUN_0203bf48(void *);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_28__0219b96c(int *p) {int *s=(int *)p[2];void *entity=FUN_02039200(FUN_020352a4(*(void **)0x02108cf4,s[20]));if(entity&&!FUN_0203bf48(entity)){s[20]=-1;FUN_02037924((void *)p[2]);}else FUN_02040c0c((void *)p[1],0,6,4096,0);}
