// FUN_overlay_28__0219b8d4 @ 0x0219b8d4 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219b8d4 @ 0x0219b8d4 (code 0x74, full extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch424.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int scalar;Vec position,scaled;} Frame;extern void FUN_overlay_28__0219acb8(void *,void *,void *,void *);extern void FUN_02091cc0(void *,void *,void *);extern void FUN_overlay_28__0219ac88(void *,void *);extern void FUN_overlay_28__0219ad24(void *,void *);extern int FUN_02040d44(void *,int);extern void FUN_02037924(void *);extern int FUN_02037254(void *,int,int,void *,int);extern int FUN_02036c34(void *);
void FUN_overlay_28__0219b8d4(int *self) { int *owner=(int *)self[1];Frame f;FUN_overlay_28__0219acb8(&f.scalar,owner,self+9,(void *)0x0219c428);FUN_02091cc0(&f.scaled,self+3,&f.scalar);FUN_overlay_28__0219ac88(owner,&f.scaled);FUN_overlay_28__0219ad24(owner,self+6);if(FUN_02040d44(owner,0))FUN_02037924((void *)self[2]);f.position=*(Vec *)(owner+14);FUN_02037254(owner,14,1,&f.position,0);self[9]+=FUN_02036c34(owner); }
