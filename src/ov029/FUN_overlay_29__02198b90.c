// FUN_overlay_29__02198b90 @ 0x02198b90 (0x7e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198b90 @ 0x02198b90 (code 0x7e, full extent 0x7e, thumb)
// check: vers=2.0/sp2p3 target=0x7e candidate=0x7e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch425.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int m[9];} Mat;extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_020345f0(void *,void *);typedef struct {Vec copy,position;Mat matrix33;int matrix43[12],request[25];} Frame;extern int FUN_02074f94(void *);extern void FUN_0203666c(void *);extern void *FUN_02046d94(void *,int,int);extern int FUN_02074fc4(void *,void *,int,int);
void FUN_overlay_29__02198b90(int *self) { Frame f;int slot=FUN_02074f94(self);void *child,*effect;if(slot==-1)return;child=FUN_02036c88(self,0);if(child && FUN_0204260c(child,0,f.matrix43,&f.matrix33)){FUN_0200c938(&f.position,12);FUN_0205b960(&f.position,f.matrix43,&f.position);FUN_020345f0(&f.copy,&f.position);FUN_0203666c(f.request);f.request[21]=38;f.request[22]=self[3];*(Vec *)(f.request+8)=f.copy;effect=FUN_02046d94(f.request,0,0);if(effect)FUN_02074fc4(self,effect,slot,0);} }
