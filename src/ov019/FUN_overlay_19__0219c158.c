// FUN_overlay_19__0219c158 @ 0x0219c158 (0x72, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219c158 @ 0x0219c158 (code 0x72, full extent 0x72, thumb)
// check: vers=2.0/sp2p3 target=0x72 candidate=0x72 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch419.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec copy,position;int matrix33[9],matrix43[12];Vec finalPosition;} Frame;extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_020345f0(void *,void *);extern int FUN_overlay_19__02198418(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_19__02198f70(void *,void *);extern int FUN_overlay_19__02198438(void *,void *);
void FUN_overlay_19__0219c158(int *self) { Frame f;void *owner=(void *)self[1];void *child;f.finalPosition.x=0;f.finalPosition.y=0;f.finalPosition.z=0;child=FUN_02036c88(owner,0);if(child && FUN_0204260c(child,14,f.matrix43,f.matrix33)){FUN_0200c938(&f.position,12);FUN_0205b960(&f.position,f.matrix43,&f.position);FUN_020345f0(&f.copy,&f.position);f.finalPosition=f.copy;if(FUN_overlay_19__02198418(owner)==1){void *p=FUN_020ba894(52);if(p)p=FUN_overlay_19__02198f70(p,&f.finalPosition);FUN_overlay_19__02198438(owner,p);}} }
