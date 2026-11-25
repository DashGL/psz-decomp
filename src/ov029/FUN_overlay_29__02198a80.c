// FUN_overlay_29__02198a80 @ 0x02198a80 (0x7a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198a80 @ 0x02198a80 (code 0x7a, full extent 0x7a, thumb)
// check: vers=2.0/sp2p3 target=0x7a candidate=0x7a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch425.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int m[9];} Mat;extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_020345f0(void *,void *);typedef struct {Vec copy,position;Mat matrix33;int matrix43[12];} Frame;extern int *FUN_02075040(void *,int);
void FUN_overlay_29__02198a80(int *self) { Frame f;int *target=FUN_02075040(self,self[53]);void *child;if(target){child=FUN_02036c88(self,0);if(child && FUN_0204260c(child,2,f.matrix43,&f.matrix33)){FUN_0200c938(&f.position,12);FUN_0205b960(&f.position,f.matrix43,&f.position);FUN_020345f0(&f.copy,&f.position);*(Vec *)(target+23)=f.copy;*(Mat *)(target+28)=f.matrix33;*(Vec *)(target+20)=*(Vec *)(self+19);}} }
