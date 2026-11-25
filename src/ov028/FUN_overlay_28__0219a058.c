// FUN_overlay_28__0219a058 @ 0x0219a058 (0xae, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a058 @ 0x0219a058 (code 0xae, full extent 0xae, thumb)
// check: vers=2.0/sp2p3 target=0xae candidate=0xae words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch465.md.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_overlay_28__0219a250(void *);extern int FUN_02036f7c(void *,void *);extern void FUN_overlay_28__0219a1c8(void *,void *);extern int FUN_overlay_28__0219a22c(void *);extern void FUN_overlay_28__0219a208(void *,void *);extern int FUN_02040d44(void *,int);extern void FUN_02037924(void *);
void FUN_overlay_28__0219a058(int *self) { void *owner=(void *)self[1];Vec vector;if(FUN_overlay_28__0219a250(owner)==1){int scale;FUN_02036f7c(owner,&vector);scale=self[6];vector.x=(int)(((long long)vector.x*scale+2048)>>12);vector.y=(int)(((long long)vector.y*scale+2048)>>12);vector.z=(int)(((long long)vector.z*scale+2048)>>12);FUN_overlay_28__0219a1c8(owner,&vector);}if(FUN_overlay_28__0219a22c(owner)==1)FUN_overlay_28__0219a208(owner,self+3);if(FUN_02040d44(owner,0))FUN_02037924((void *)self[2]); }
