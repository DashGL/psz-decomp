// FUN_overlay_28__0219ae10 @ 0x0219ae10 (0xa8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219ae10 @ 0x0219ae10 (code 0x9e, full extent 0xa8, thumb)
// check: vers=2.0/sp2p3 target=0xa8 candidate=0xa8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch458.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec result,offset,direction,transformed,position,zero;int matrix33[9],matrix43[12];} Frame;extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_020345f0(void *,void *);extern void FUN_0205b0f0(void *,void *,void *);extern unsigned short FUN_0205c9e4(int,int);extern void FUN_020bbfbc(void *,int);extern void FUN_0203647c(void *,void *,void *);extern void FUN_02037404(void *,void *,unsigned short,int,int,int);
void FUN_overlay_28__0219ae10(int *self) { Frame f;void *child=FUN_02036c88(self,0);if(child && FUN_0204260c(child,1,f.matrix43,f.matrix33)){unsigned short angle,ownerangle;FUN_0200c938(&f.zero,12);FUN_0205b960(&f.zero,f.matrix43,&f.zero);FUN_020345f0(&f.position,&f.zero);f.transformed=*(Vec *)0x0219bb78;FUN_0205b0f0(&f.transformed,f.matrix33,&f.transformed);FUN_020345f0(&f.direction,&f.transformed);angle=FUN_0205c9e4(f.direction.x,f.direction.z);ownerangle=*(unsigned short *)(self+17);f.offset=*(Vec *)0x0219c318;FUN_020bbfbc(&f.offset,ownerangle);FUN_0203647c(&f.result,&f.position,&f.offset);FUN_02037404(self,&f.result,angle,0,3,8);} }
