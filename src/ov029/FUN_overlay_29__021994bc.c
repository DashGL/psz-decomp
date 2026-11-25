// FUN_overlay_29__021994bc @ 0x021994bc (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_29__021994bc @ 0x021994bc (code 0x76, full extent 0x7c, thumb)
// check: vers=2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch426.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec directionCopy,direction,positionCopy,position;int matrix33[9],matrix43[12];} Frame;extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_0205b0f0(void *,void *,void *);extern void FUN_020345f0(void *,void *);extern unsigned short FUN_0205c9e4(int,int);extern void FUN_02037404(void *,void *,int,unsigned,unsigned,int);
void FUN_overlay_29__021994bc(int *self) { Frame f;void *child=FUN_02036c88(self,0);if(child && FUN_0204260c(child,3,f.matrix43,f.matrix33)){FUN_0200c938(&f.position,12);FUN_0205b960(&f.position,f.matrix43,&f.position);FUN_020345f0(&f.positionCopy,&f.position);f.direction=*(Vec *)0x0219b898;FUN_0205b0f0(&f.direction,f.matrix33,&f.direction);FUN_020345f0(&f.directionCopy,&f.direction);FUN_02037404(self,&f.positionCopy,FUN_0205c9e4(f.directionCopy.x,f.directionCopy.z),0,4,8);} }
